#include<iostream>
#include<queue>
using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--){
		long long n,k,m;
		cin>>m>>n>>k;
		//int a[n],b[k];
		priority_queue < int , vector<int> , greater<int> > a;
		for(int i=0;i<n;++i){
			int term;
			cin>>term;
			a.push(term);
			
			
		}
		for(int i=0;i<m;++i){
			int term;
			cin>>term;
			a.push(term);
			
			
		}
		for(int i=0;i<k-1;++i){
			a.pop();
		}
		cout<<a.top()<<endl;
		
	}
	
	return 0;
}

