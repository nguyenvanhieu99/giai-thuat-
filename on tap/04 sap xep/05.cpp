#include<iostream>
#include<algorithm>
using namespace std;
void out(int *e,int t){
	for(int i=0;i<t;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[t-1];
}
void union1(int *a,int *b,int n,int m){
	int i=0,j=0,t=0,e[n+m];
	while(i<n&&j<m){
		if(a[i]>b[j]){
			e[t]=a[i];
			t++;
			j++;
		}
		else if(a[i]<b[j]){
			e[t]=b[j];
			t++;i++;
		}
		else{
			e[t]=a[i];
			t++;i++;j++;
		}

	}
	while(i<n){
		e[t]=a[i];
		t++;i++;
	}
	while(j<m){
		e[t]=b[j];
		t++;j++;
	}
	out(e,t);
}
void intersection(int *a,int *b,int n,int m){
	int i=0,j=0,t=0,t[n];
	while(i<n&&b<m){
		if(a[i]>b[j]){
			j++;
		}
		else if(a[i]<b[i]){
			i++;
		}
		else{
			e[t]=a[i];
			t++;j++;i++;
		}
	}
	out(e,t);
}



int main(){
	int bo ;cin>>bo;
	while(bo--){
		int m,n;cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++){
			cin>>a[i];

		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+m);
		union1(a,b,n,m);
		intersection(a,b,n,m);
		
	}
	return 0;
}
