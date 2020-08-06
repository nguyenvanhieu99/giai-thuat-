#include<iostream>
#include<queue>
  
using namespace std; 
const unsigned int M = 1000000007; 
int n;
int main(){
	int bo;cin>>bo;
	while(bo--){
		cin>>n;
		priority_queue <int,vector<int>,greater<int> > a;
		long long term;
		for(int i=0;i<n;++i){
			cin>>term;
			a.push(term);
			
		}
		long long res=0;
		
		for(int i=0;i<n;++i){
			term=a.top();
			//cout<<term<<" ";
			a.pop();
			res=res+(term*i)%M;
		}
		//cout<<endl;
		cout<<res%M<<endl;
	}

	return 0;
}

