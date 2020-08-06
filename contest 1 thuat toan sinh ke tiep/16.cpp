#include<iostream>

using namespace std;
bool ok=true;
int dem=0,n,k,a[100],ma[100][100],res[100][100];

void sinh(){
	int i=n;
	while(a[i]<=a[i-1])i--;
	if((i-1)>0){
		int j=n;
		while(a[i-1]>=a[j])j--;
		swap(a[i-1],a[j]);
		int r=i,s=n;
		while(r<s){
			swap(a[r],a[s]);
			r++;s--;
		}
	}
	else ok=false;
}
bool check(){
	int term=0;
	for(int i=1;i<=n;++i){
		term+=ma[i][a[i]];
	}
	if (term==k) return 1;
	else return 0;
}
void out(){
	for(int i=1;i<=n;++i){
		cout<<a[i];
	}
	cout<<endl;
}
int main(){
	
		cin>>n>>k;
		
		for(int i=1;i<=n;++i){
			a[i]=i;
			for(int j=1;j<=n;++j){
				cin>>ma[i][j];
			}
		}
		while(ok){
			if(check()){
				dem++;
				for(int i=1;i<=n;++i){
					res[dem][i]=a[i];
				}
			}
		//	out();
			sinh();
			
		}
		cout<<dem<<endl;
		for(int i=1;i<=dem;++i){
			for(int j=1;j<=n;++j){
				cout<<res[i][j];
			}
			cout<<endl;
		}
		

	return 0;
}

