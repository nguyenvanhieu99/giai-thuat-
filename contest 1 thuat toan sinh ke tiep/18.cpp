//Bai 18 : may atm
#include<iostream>
#include<math.h>
#include<algorithm>
//cout<<"test"<<endl;
using namespace std;
int n,nterm,kterm=1,k;
long long s,x[40],a[40]={1};
bool ok=true;
void sinh(){
	int i=nterm;
	while(a[i]==(n+i-nterm))i--;
	if(i>0){
		a[i]++;
		int j=i+1;
		int term=1;
		while(j<=nterm){
			a[j]=term;
			term++;
			j++;
		}
	}else {
		int j=1;
		nterm++;
		while(j<=nterm)a[j]=1;
		
	}
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;++i)	{
		cin>>x[i];
	}
	while(ok){
		int s=0;
		
		for(int i=1;i<=nterm;++i){
			s+=a[x[i]]	;
		}if(s==k) {
			cout<<nterm<<endl;
			break;
		} 
		sinh ();
	}

	return 0;
}

