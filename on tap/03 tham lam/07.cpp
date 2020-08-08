#include<iostream>
#include<queue>

using namespace std;
int n;
int main(){
	int bo ;cin>>bo ;
	while(bo--){
		priority_queue <int> a;
		priority_queue <int,vector<int>,greater<int> > b;
		cin>>n;
		int term;
		for(int i=0;i<n;i++){
			cin>>term;a.push(term);
		}
		for(int i=0;i<n;i++){
			cin>>term;b.push(term);
		}
		long long res=0;
		for(int i=0;i<n;i++){
			int s1=a.top();a.pop();
			int s2=a.top();p.pop();
			res=res+s1*s2;

		}
		cout<<res<<endl;
	}
	return 0;
}
