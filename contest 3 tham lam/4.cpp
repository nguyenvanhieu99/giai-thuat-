#include<iostream>
#include<queue>
using namespace std;
int n;
int main(){	
	int bo;cin>>bo;
	while(bo--){
		cin>>n;
		priority_queue <int ,vector<int>,greater<int> > a;
		int term;
		for(int i=0;i<n;++i){
			cin>>term;
			a.push(term);
		}
		long long s1=a.top();a.pop();
		long long  s2=a.top();a.pop();
		for(int i=2;i<n;++i){
			if(i%2==0){
				s1=s1*10+a.top();
				a.pop();
			}else{
				s2=s2*10+a.top();
				a.pop();
			}
		}
		cout<<s1+s2<<endl;
	}

	return 0;
}

