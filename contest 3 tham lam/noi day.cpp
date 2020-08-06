//bai toan noi day 
#include<iostream>
#include<queue>
using namespace std;
int n;
int main(){
	cin>>n;
	int term;
	priority_queue  <int,vector<int>,greater<int> > ad;
	for(int i=0;i<n;++i){
		cin>>term;
		ad.push(term);
		
	}
	int res=0;
	for(int i=0;i<n;++i){
		cout<<ad.top()<<" ";
		term+=ad.top();
		ad.pop();
	}

	return 0;
}

