#include<iostream>
#include<algorithm>
#include<math.h>
//#include<bits/stdc.h>
using namespace std;
bool compare(int a,int b){
	return abs(a)<abs(b);
}
int tinh(int *a,int n){
	int min=a[1]+a[0];
	for(int i=1;i<n;i++){
		int term=a[i]+a[i-1];
		if(abs(term)<=abs(min)) min=term;
	}
	return min;
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		int n,k;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,compare);
//		for(int i=0;i<n;i++){
//			cout<<a[i]<< " ";
//		}
		cout<<tinh(a,n)<<endl;
	}

	return 0;
}

