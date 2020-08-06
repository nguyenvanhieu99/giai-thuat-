//bai 22 :di chuyen trong me cung 1  
#include<iostream>
#include<cstring>
using namespace std;

int n,a[20][20]={0},b[20];

char  s[100];

bool ok=true,kt=true;

void out(int k){
	
	for(int i=0;i<k;++i){
		cout<<s[i];
	}
	
	cout<<" ";
	kt=false; 
}
int dem=0;
void dequy(int i,int j,int k){
	//cout<<dem;
	//dem++;
	if(i==n&&j==n){
		out(k);
	}
	
	if(i<n&&a[i+1][j]){
		
	//	cout<<"\n+" ;
		s[k]='D';
		dequy(i+1,j,k+1);
		
	}
	if(j<n&&a[i][j+1]){
	//	cout<<"\n*" ;
		s[k]='R';
		dequy(i,j+1,k+1);
	}
	
}   
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		cin>>n;
		//s="" ;
		for(int i=1;i<=n;++i){
			for(int j=1;j<=n;++j){
				cin>>a[i][j];
			}
		}
		if(a[1][1]==0) cout<<"-1";
		else{
		 	dequy(1,1,0); 
		 	if(kt) cout<<"-1";
		}
		cout<<endl;
		kt=true;
	}	
	return 0;
}

