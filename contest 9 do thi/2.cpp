#include<iostream>
#include<algorithm>

using namespace std;
bool com(pair<int,int> a,pair <int ,int> b){
	if(a.first==b.first)
	return a.second<b.second;
	else{
		return a.first<b.first;
	}
}
int main(){

	int n,k;cin>>n;
	pair<int,int> a[n];
		
		for(int i=0;i<n;i++){
			int t1,t2;
			cin>>t1>>t2;
			a[i]=make_pair(t1,t2);
		}
		sort(a,a+n,com);

		for(int i=0;i<n;i++){
			cout<<a[i].first<<" "<<a[i].second<<endl;
		}

	return 0;
}

