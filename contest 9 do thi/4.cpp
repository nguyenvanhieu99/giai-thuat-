#include<iostream>
#include<algorithm>
#include<sstream>

using namespace std;
int a[1005][1005]={0};
int main(){
	int n;cin>>n;
	cin.ignore();
	for(int i=1;i<=n;i++){
		string s;getline(cin,s);
		stringstream ss(s);
		int x;
		while(ss>>x){
			a[i][x]=1;
		}		
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}

