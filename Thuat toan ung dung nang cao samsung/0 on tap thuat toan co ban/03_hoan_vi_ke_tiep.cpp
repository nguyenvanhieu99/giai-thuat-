#include<iostream>

using namespace std;
int n,a[1000];
bool ok=true;
void sinh(){
	int i=n-1;
	while(i>0&&a[i]>a[i+1]){
		i--;
	}
	if(i>0){
		int j=n;
		while(a[j]<a[i])j--;
		swap(a[i],a[j]);
		int l=i+1,r=n;
		while(l<r){
			swap(a[l],a[r]);
			l++;r--;
		}
	}else{
		for(int i=1;i<=n;i++){
			a[i]=i;
		}
	}
}
void out(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sinh();
		out();
	}

	return 0;

}
