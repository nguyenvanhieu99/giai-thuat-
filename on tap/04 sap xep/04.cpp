#include<iostream>

using namespace std;
void uinon1(int a[],int b[],int n,int m){
	int i=0,j=0,e[n+m],t=0;
	while(i<n&&j<m){
		if(a[i]<b[j]){
			e[t]=a[i];
			t++;
			i++;
		}
		else if(a[i]>b[j]){
			e[t]=b[j];
			t++;
			j++;
		}
		else {
			e[t]=a[i];
			t++;i++;j++;
		}
	}
	while(i<n){
		e[t]=a[i];
		i++;t++;
	}
	while(j<m){
		e[t]=b[j];
		t++;j++;
	}
	for(int w=0;w<t-1;w++){
		cout<<e[w]<<" ";
	}
	cout<<e[t-1]<<endl;

}
void intersection(int *a,int *b){
	int i=0,j=0,t=0,e[n];
	while(i<n&&j<m){
		if(a[i]>b[j]){
			j++;
		}
		else if(a[i]<b[j]){
			i++;
		}
		else {
			e[t]=a[i];
			t++;
			i++;
			j++;
		}
	}
	if(t==0) cout<<"0"<<endl;
	else{
		for(int i=0;i<t-1;i++)
			cout<<e[i]<<" ";
	}
	cout<<e[t-1]<<endl;
}
int main(){
	int bo;cin>>bo;
	while(bo--){
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++){
			fcin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		union1(a,b,n,m);
		intersection(a,b);


	}
	return 0;
}
