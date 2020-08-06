#include<iostream>
#include<cstring>
using namespace std;
int k;
string s,max1;
void dequy(int k){
	if(k==0) return;
	int n=s.length();
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			if(s[i]<s[j]) {
				swap(s[i],s[j]);
				if(s.compare(max1)>0) max1=s;
				
				dequy(k-1);
				swap(s[j],s[i]);
			}
			
		}
	}
}
int main(){
	int bo ;cin>>bo;
	while(bo--) {
		
		cin>>k>>s;
		max1=s;
		dequy(k);
		cout<<max1<<endl;
		
	}

	return 0;
}

