//test 1 so ham trong std
#include<iostream>
#include<algorithm>
using namespace std;
void test_upperBound(int *a,int t){
	int x=t;
	int *d=upper_bound(a,a+10,x);
	int s=(a+10)-d;
//	for(int i=0;i<s;i++){
//		cout<<d[i]<<endl;
//	}
	cout<<s<<endl;
}
int main(){
	int a[10]={0,0,0,1,1,2,3,4,5,6};
	int bo;cin>>bo;
	while(bo--){
		int x;
		cin>>x;
		test_upperBound(a,x);
	}

	return 0;
}

