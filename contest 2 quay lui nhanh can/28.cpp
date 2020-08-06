#include<iostream>
#include<algorithm>
using namespace std;
int n,a[100],s[100],t,w=0,tam=0;
bool check=false;
void out(int i){
	cout<<"[";
	for(int j=0;j<i;j++){
		cout<<s[j]<<" ";
	}
	cout<<s[i]<<"] ";
	check=true;
	
}
void trackback(int i){
	if(i>n) return;
	for(int j=tam;j<n;++j){
		if((w+a[j])<=t&&a[j]>=s[i-1]){
			
			s[i]=a[j];
			w=w+s[i];
			tam=j;
			if(w==t){
				
				 out(i);
				 w=w-s[i];
				 return;
			}
			else trackback(i+1);
			w=w-s[i];
		}
		
	}
}
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		cin>>n>>t;
		tam=0;
		w=0;check=false;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		trackback(0);
		if(!check) cout<<"-1";
		cout<<endl;
	}
	return 0;
}

