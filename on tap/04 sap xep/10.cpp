#include<iostream>

using namespace std;

int dem=0,max1=0;
void  check(long long x,int *a){
	while(x>0){
		int t=x%10;x/=10;
		max1=max(max1,t);
		if(a[t]==0) dem++;
		a[t]++;

	}
}
int main(){
	int bo ;cin>>bo;
	while(bo--){
		int n;dem=0;max=0;
		cin>>n;
		int res[10]={0};
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(dem!=10 ) check(a[i],res);
		}
		if(dem== 10 ) cout<<"0 1 2 3 4 5 6 7 8 9"<<endl;
		else{
			for(int i=0;i<max;i++){
				if(res[i]!=0) cout<<i<<" ";
			}
			cout<<a[max]<<endl;
		}
	}	


	return 0;
}
