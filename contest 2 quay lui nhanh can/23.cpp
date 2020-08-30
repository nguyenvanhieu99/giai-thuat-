//bai 22 :di chuyen trong me cung 1  
#include<iostream>

using namespace std;
int n,a[20][20]={0};
bool term[20][20]={false};
string s;
bool ok=true,kt=true;
void out(int k){ 
	for(int i=0;i<k;++i){
		cout<<s[i];
	}
	cout<<" ";
} //out 

void dequy(int i,int j,int k){
	if(i==n&&j==n){
		out(k);
		kt=false;
	} // if 
	if(j<n&&a[i][j+1]&&term[i][j+1]){
		s[k]='R';
		term[i][j]=false;
		dequy(i,j+1,k+1);
		term[i][j]=true;
	} // if
	if(i<n&&a[i+1][j]&&term[i+1][j]){
		s[k]='D';
		term[i][j]=false;
		dequy(i+1,j,k+1);
		term[i][j]=true;
	} // if

	if(j>1&&a[i][j-1]&&term[i][j-1]){
		s[k]='L';
		term[i][j]=false;
		dequy(i,j-1,k+1);
		term[i][j]=true;
	} // if
	
	if(i>1&&a[i-1][j]&&term[i-1][j]){
		
		s[k]='U';
		term[i][j]=false;
		dequy(i-1,j,k+1);
		term[i][j]=true;
	} //if
	
} // dequy
int main(){
	int bo,k;
	cin>>bo;
	while(bo--){
		cin>>n;
		s="";
		for(int i=1;i<=n;++i){
			for(int j=1;j<=n;++j){
				int term1;
				cin>>term1;
				a[i][j]=term1;
				term[i][j]=term1;
			}
		}
		if(a[1][1]==0||a[n][n]==0) cout<<"-1";
		else {
		dequy(1,1,0);
		if(kt) cout<<"-1";
		}
		cout<<endl;
		kt=true;
	}
	return 0;
}

