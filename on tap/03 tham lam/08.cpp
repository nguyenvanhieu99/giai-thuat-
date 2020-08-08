#include<bits/stdc++.h>
using namespace std;
int n;
struct jobtime{
	int st;
	int en;
}

bool jobcom(jobtime t1,jobtime t2){
	return j1.en<j2.en;
}
void init(){
	cin>>n;
	jobtime a[n];
	int dem=1;
	for(int i=0;i<n;i++){
		cin>>a[i].st;
	}
	for(int i=0;i<n;i++){
		cin>>a[i].en;
	}
	sort(a,a+n,jobcom);
	int d=0;
	for(int i=1;i<n;i++){
		if(a[i].st>= a[d].en){
			dem++;
			d=i;
		}
	}
	cout<<dem<<endl;
}
int main(){
	int b0;cin>>bo;
	while(bo--){
		init();
	}
	return 0;

}

