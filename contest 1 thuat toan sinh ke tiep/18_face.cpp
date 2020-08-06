#include<iostream>
#include<algorithm>
using namespace std;
int n,dem=0,k=1,a[40]={1};
long long s,t[40];
bool ok=true;
void sinh(){
	int i=k;
	while(i>0&&a[i]==(n-k+i))i--;
	if(i>0){
		++a[i];
		for(int j=i+1;j<=k;++j){
			a[j]=a[j-1]+1;
		}
	}else{
		k++;
		for(int i=1;i<=k;++i){
			a[i]=i;
		}
	}
}
int main(){
	cin>>n>>s;
	for(int i=1;i<=n;++i){
		cin>>t[i];
	}
	sort(t+1,t+n+1);
	int r=n,d=1;
	while(r>d){
		swap(t[r],t[d]);
		r--;d++;
	}
	while(ok){
		int term=0;
		for(int i=1;i<=k;++i){
			term+=t[a[i]];
		}
		if(term==s){
			cout<<k;
			break;
		}
		sinh();
	}


	return 0;
}

