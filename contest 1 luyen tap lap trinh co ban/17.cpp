#include<iostream>

using namespace std;
int a[6],gti,max1=0;
void init(){
	for(int i=0;i<6;i++){
		cin>>a[i];
		if(i%2!=0){
			if(a[i]>a[i-1]) swap(a[i],a[i-1]);
			if(max1<a[i-1]){
				max1=a[i-1];
				gti=i-1;
			} 
		}
	}
	swap(a[gti],a[0]);
	swap(a[gti+1],a[1]);
}
int check(){
	int c1=0,c2=-1,k1=2,k2=4;
	int tam=a[0]-a[1];

	for(int i=2;i<4;i++) if(tam==a[i]) c1=i;
	if(c1==2) k1=3;
	for(int i=4;i<6;i++) if(tam==a[i]) c2=i;
	if(c2==4) k2=5;
//	cout<<a[k1]<< " "<<a[k2]<<endl;
//	cout<<max1<<endl;
	cout<<c1<<endl;cout<<c2<<endl;
	if(((a[k1]+a[k2])==max1)&&a[c1]==a[c2]) return 1;
	else return 0;
}
int main(){
	
	init();
	if(check()) cout<<"YES"<<endl;
	else cout<<"NO";
	
	return 0;
}

