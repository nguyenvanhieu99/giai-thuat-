#include<iostream>

using namespace std;
int a[1000][1000];
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		
		int n;cin>>n;
		string s1,s2;cin>>s1;
		s1=' '+s1;
		//s2=' '+s2;
		for(int i=0;i<1000;i++){
		a[i][0]=0;
		//a[0][i]=0;
		}
		int i,j;
		for( i=1;i<s1.size();i++){
			for(j=1;j<s1.size();j++){
				
				if(s1[i]==s1[j]&&i!=j) a[i][j]=a[i-1][j-1]+1;
				else a[i][j]=max(a[i][j-1],a[i-1][j]);
				//cout<<a[i][j]<<" ";
			}
			//cout<<endl;
		}
		cout<<a[s1.size()-1][s1.size()-1]<<endl;
		
	}

	return 0;
}

