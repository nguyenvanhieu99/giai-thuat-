#include<bits/stdc++.h>
using namespace std;
long long n,s,t[35],dem=0;
int main(){
	cin>>n>>s;
	for(int i=0;i<n;i++)
		cin>>t[i];
	//sap xep tang dan.
	sort(t,t+n);
	long long i=n-1;
	while(s>0){
		if(s>=t[i]){
			dem++;
			s-=t[i];
		}
		i--;
	}
	cout<<dem;
	return 0;
}

