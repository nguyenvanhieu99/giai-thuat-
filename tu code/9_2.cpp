//lai bai 9:
#include<iostream>

using namespace std;
int a[100];
int n;
long long  sinh(){
	int p=n;
	long long s=0;
	while(a[p]==9) --p;
	if(p>0){
		a[p]=9;
		for(int i=p+1;i<=n;i++){
			a[i]=0;
		}
	}
	else {
		for(int i=2;i<=n;++i) a[i]=0;
		n=n+1;
		a[n]=0;
	}
	for(int i=1;i<=n;++i){
		s=s*10+a[i];
	}
	return s;

}
int main(){
	int bo;
	cin>>bo;
	int k;
	long long t=1;
	while(bo--) {
		cin>>k;
		a[1]=0;
		n=1;
		 while((t=sinh())%k);
		cout<<t;
		t=1;
	}

	return 0;
}

