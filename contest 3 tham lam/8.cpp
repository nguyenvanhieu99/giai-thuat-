//sap xep cong viec
#include<bits/stdc++.h>


using namespace std;

struct jobtime
{	
	int start;
	int finish;
};
bool jobcomp(jobtime j1,jobtime j2){
	return j1.finish<j2.finish;
	
}
int n;
void init(){
	cin>>n;
	jobtime a[n];
	int dem=1;
	for(int i=0;i<n;++i){
		cin>>a[i].start;
	}
	for(int i=0;i<n;++i){
		cin>>a[i].finish;
	}
	sort(a,a+n,jobcomp);
	int d=0;
	for(int i=1;i<n;++i){
		if(a[i].start>=a[d].finish)
		{  
			dem++;
			d=i;
		}
	}
	cout<<dem<<endl;
}


int main(){
	int bo;cin>>bo;
	while(bo--){
		init();
	}

	return 0;
}

