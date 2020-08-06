#include<iostream>
#include<math.h>
using namespace std;
bool check ( int n){
	if( n < 2 ) return false ;
	if( n == 2 || n == 3 || n == 5 )return true ;
	if( n %2 ==0 || n % 3 == 0 || n % 5 == 0) return false;
	for( int i=5 ; i <= sqrt(n) ; i += 5)
		if( n % i ==0 || n % (i+2) == 0 ) return false;
	return true;
}
int main(){
	int n;
	cin>>n;
	int dem=0;
	for(int i=2;i<n;++i){
		if(check(i)){
		cout<<i<<",";
		dem++;	
		} 
	}
	cout<<"\n"<<dem;
	return 0;
}

