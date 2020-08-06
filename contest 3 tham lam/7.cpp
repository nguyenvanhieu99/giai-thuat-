//bai 7:gia tri nho nhat cua bieu thuc
#include<iostream>
#include<queue>
using namespace std;
int n;
int main(){
	int bo ;cin>>bo;
	while(bo--){
		priority_queue <int>	a;
		priority_queue<int,vector<int>,greater<int> >b;
		int n;cin>>n;
		int term;
		for(int i=0;i<n;++i){
			cin>>term;a.push(term);
		}
		for(int i=0;i<n;++i){
			cin>>term;b.push(term);
		}
		long long res=0;
		for(int i=0;i<n;++i){
			int s1=a.top();
			int s2=b.top();
			res=res+s1*s2;
			a.pop();b.pop();
		}
		cout<<res<<endl;
		
	}

	return 0;
}

