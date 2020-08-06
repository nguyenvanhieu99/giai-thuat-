#include<iostream>
using namespace std;
long long tmin(int d,int t){
	long long  tong=0,term1=d,dem=1;
	while(term1!=0){
	 	int x=term1%10;
		term1=term1/10;
		if(x==6||x==5) tong=tong + t*dem;
		else  tong =tong +x*dem;
		dem*=10;
	}
	return tong;
}
int main(){
	long long a,b;
	cin>>a>>b;
	cout<<tmin(a,5)+tmin(b,5)<<" ";
	cout<<tmin(a,6)+tmin(b,6)<<endl;
	return 0;
}
