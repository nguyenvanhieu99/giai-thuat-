
#include<bits/stdc++.h>
using namespace std;
void sinhtohop(int *a,int n,int k){
	int s[k];
	int term=0;
	for(int i=n-k+1 ;i<=n;i++){
		s[term]=i;
		//cout<<s[term]<<' ';
		term++;
	} 
	term=-1;
	for(int i=k-1;i>=0;i--){
		if(a[i]!=s[i]){
			term =i;
			break;
		}
		}
		
		if(term>=0){
			a[term]=a[term]+1;
			int j=term+1;
			while(j<n){
				a[j]=a[j-1]+1;
				j++;
			}
		}
		else {
			for(int i=0;i<k;i++){
				a[i]=i+1;
			}
		}
		
	for(int i=0;i<k-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[k-1]<<endl;
	
}
int main(){
	int bo;cin>>bo;
	while(bo--){
	int n,k;cin>>n>>k;
		int a[n];
		for(int i=0;i<k;i++){
			cin>>a[i];
		}
		sinhtohop(a,n,k);
	}

	return 0;
}

