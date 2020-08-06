//#include<iostream>
//#include<vector>
//#include<utility>
//#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int bo;cin>>bo;
	while(bo--){
		int n;
		cin>>n;
		vector <pair <int,int> > arr(n);
		for(int i=0;i<n;++i){
			int term;cin>>term;
			arr[i].first=term;
			arr[i].second=i;
		}
		sort(arr.begin(),arr.end());
		int dem=0;
		for(int i=0;i<n;++i){
			if(arr[i].second==i){
				continue;
			}
			swap(arr[i].first,arr[arr[i].second].first);
			swap(arr[i].second,arr[arr[i].second].second);
			//arr[i].swap(arr[arr[i].second]);
			if(i!=arr[i].second){
				i--;
			}
			dem++;
		}
		cout<<dem<<endl;
		
		
		
//		for(int i=0;i<n;++i){
//			
//			
//			cout<< arr[i].first;
//			cout<<"("<<arr[i].second<<")"<<" ";
//			
//		}
		
	}

	return 0;
}

