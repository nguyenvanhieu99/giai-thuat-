#include<iostream>
#include<queue>

using namespace std;

int n,k;
const usigned int M=1000000007;

int main(){
	int bo;cin>>bo;
	while(bo--){
		cin>>n>>k;
		priority_queue <int,vector<int>,greater<int> >a;
		long long term;
		for(int i=0;i<n;i++){
			cin>>term;
			a.push(term);
		}
		long long s1=0,s2=0;
		if(k<n/2);
		else k=n-k;
		for(int i=0;i<k;i++){
			term=a.top();
			s1=s1+term;
			a.pop();
		}
		for(int i=k;i<n;i++){
			term=a.top();
			s2=s2+term;
			a.pop();
		}
		cout<<s2-s1<<endl;
		
	}
	return 0;
}
