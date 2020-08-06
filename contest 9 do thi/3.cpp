#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int n;cin>>n;
	//int b[n+1][n+1];
	vector<int> a[n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int term;cin>>term;
			//b[i][j]=term;
			if(term==1)
			a[i].push_back(j);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<a[i].size();j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

