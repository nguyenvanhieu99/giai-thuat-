#include<iostream>
#include<queue>

using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--){
		int n;cin>>n;
		priority_queue <long long ,vector<long long>,greater<long long> >  a;
		for(int i=0;i<n;i++){
			int term;
			cin>>term;
			a.push(term);
			
		}
		long long e,r,res=0;
		for(int i=0;i<n;i++){
			e=a.top();a.pop();
			if(a.empty()) break;
			r=a.top();a.pop();
			long long term1=e+r;
			res+=term1;
			a.push(term1);
		}
		cout<<res<<endl;
		
	}
	return 0;
}

