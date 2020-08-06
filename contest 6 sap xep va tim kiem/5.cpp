#include<iostream>
#include<algorithm>
using namespace std;
void out(int *a,int v){
	for(int i=0;i<v-1;++i){
		cout<<a[i]<<" ";
	}
	cout<<a[v-1]<<endl;
	
}
void union1(int *a,int *b,int n,int m){
	int i=0,j=0,t=0,e[n+m];
	while(i<n&&j<m){
		if(a[i]>b[j]){
			e[t]=b[j];
			t++;j++;
		}
		else if(a[i]<b[j]){
			e[t]=a[i];
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
	int i=0,j=0,t=0,e[n];
	while(i<n&&j<m){
		if(a[i]<b[j]){
			i++;
		}
		else if(a[i]>b[j]){
			j++;
		}
		else{
			e[t]=a[i];
			t++;j++;i++;
		}
	}
	out(e,t);
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		int n,m;cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		for(int i=0;i<m;++i){
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+m);
		union1(a,b,n,m);
		intersection(a,b,n,m);
	}

	return 0;
}

