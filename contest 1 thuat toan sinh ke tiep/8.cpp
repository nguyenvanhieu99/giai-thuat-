#include<iostream>

using namespace std;
int n,a[15]={0};
bool ok=true;
void sinh(){
	int i=n-1;
	while(i>0&&a[i]<a[i+1])i--;
	if(i>0){
		int j=n;
		while(a[j]>a[i])j--;
		swap(a[i],a[j]);
		int r=i+1,s=n;
		while(r<s){
			swap(a[r],a[s]);
			r++,s--;
		}
	}else{
		
		ok=false;
		
	}
}
void out(){
	for(int i=1;i<=n;++i){
		cout<<a[i];
	}
	cout<<" ";
}
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		cin>>n;
		int term=1;
		for(int i=n;i>=1;--i){
			a[term]=i;
			term++;
		}
		while(ok){
			out();
			sinh();
		}
		ok=true;
		cout<<endl;
	}

	return 0;
}

