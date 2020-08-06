#include<iostream>
#include<queue>
using namespace std;
int m=1e9+7;
int main(){
	int n;cin>>n;
		priority_queue <long long ,vector<long long >,greater<long long> > a;
		for(int i=0;i<n;++i){
			long long  term;
			cin>>term;
			a.push(term);
		}
		long long e ,r;
		long long res=0;
		for(int i=0;i<n;++i){
			
			e=a.top();a.pop();
			if(a.empty())	break;
			r=a.top();a.pop();
			long long term1=(e+r)%m;
			res=res+term1;
			res%=m;
			a.push(term1);
			
			 
		}
		cout<<res<<endl;

	return 0;
}

