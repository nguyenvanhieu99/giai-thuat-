#include<iostream>
#include<stdlib.h>

using namespace std;
int n,k,X[200]={0},dem=0;
bool ok=true;
void sinh(){
	int i=k,j,R,S,D;
	while(i>0&&X[i]==1)i--;
	if(i>0){
		X[i]=X[i]-1;D=k-i+1;
		R=D/X[i];
		S=D%X[i];
		k=i;
		cout<<"i D,S,R="<<i<<" "<<D<<" "<<S<<" "<<R<<" "<<endl;
		if(R>0){
			for(j=i+1;j<=i+R;j++) X[j]=X[i];
			k=k+R;
		}
		if(S>0){
			k=k+1;X[k]=S;
		}
	}else ok=false;
}
void out(){
	cout<<"(";
	for(int i=1;i<k;i++){
		cout<<X[i]<<" ";
	}
	cout<<X[k]<<") ";
	
}
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		dem=0;
		ok=true;
		cin>>n;
		k=1;X[k]=n;
		while(ok){
			out();
			sinh();
		}
		cout<<endl;
	}
	return 0;
}

