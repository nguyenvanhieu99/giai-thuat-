//Bai 16: nhu bai 2 chi khac dk luu
//mang a luu tong day con max
#include<iostream>

using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--){
	
	int n;cin>>n;
	int a[n],b[n];
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=1;i<=n;++i){
		b[i]=a[i];
		for(int j=1;j<i;++j){
			if(a[i]>a[j]) b[i]=max(b[j]+a[i],b[i]);
		}
	}
	int res=b[1];
	for(int i=1;i<=n;++i){
		if(res<b[i]) res=b[i];
	}
	cout<<res<<endl;
}
	return 0;
}

