//bai 6: sawp xep cong viec tham lam
#include<iostream>
#include<queue>
using namespace std;

int main(){
	int bo;cin>>bo;
	
	while(bo--){
		int n,a[100],term;
		bool ok=true;
		cin>>n;
		priority_queue <int> as;
		for(int i=0;i<n;++i){
			cin>>term;
			a[i]=term;
			as.push(term);
		}
		if(a[0]>a[n-1]) swap(a[0],a[n-1]);
		int k=n-2;
		int t=1;
		while(t<k){
			if(a[t]>a[k]) swap(a[t],a[k]);
			t++;k--;
		}
//		for(int i=0;i<n;++i){
//			cout<<a[i]<<" ";
//		}
//		for(int i=1;i<n;++i){
//			if(a[i]<a[i-1]){
//				ok =false;
//				break;
//			} 
//		}
		for(int i=0;i<n;++i){
			 term=as.top();
			if(term!=a[i]){
				ok=false;
				
			}
			as.pop();
			
		}
		if(ok ) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
			
	}

	return 0;
}

