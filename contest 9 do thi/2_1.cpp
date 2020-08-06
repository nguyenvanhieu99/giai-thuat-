#include<iostream>
#include<algorithm>
//#include<bits/stdc.h>
#include<sstream>
#include<vector>
using namespace std;
bool com(pair<int,int> a,pair <int ,int> b){
	if(a.first==b.first)
	return a.second<b.second;
	else{
		return a.first<b.first;
	}
}
int main(){
	int n;cin>>n;
	cin.ignore();
	//vector<int> a[n];
	vector<pair<int,int> > b;
	string s;
	for(int i=1;i<=n;i++){
		getline(cin,s);
		stringstream st(s);
		int x;
		while(st>>x){
			//a[i].push_back(x);
			if(i<x)
			b.push_back(make_pair(i,x));
		}
	}
	sort(b.begin(),b.end(),com);
	for(int i=0;i<b.size();i++){
		cout<<b[i].first<<" "<<b[i].second<<endl;
	}
	return 0;
}

