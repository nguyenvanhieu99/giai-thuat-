#include <iostream>
using namespace std;
void next( int i , string s , string rs);

int main(){
	int bo;cin>>bo;
	while(bo--){
		string s,rs;
		int n;
		cin>>n;
		cin>>s;	
		
		int i=0;
		while(i<n-1){
			next(0,s,rs);
			i++;	
			rs="";
			s.erase(0,1);	
		}
		rs+=s[0];
		cout<<rs<<endl;
	}
	
	
}
void next( int i , string s , string rs){
	
	rs += s[i];
	cout<<rs<<" ";
	if( rs[rs.length() -1] != s[ s.length() -1] )
		next( i+1 , s , rs);
	if(rs[rs.length()-1] == s[i] ){
		rs.erase(rs.length()-1);
		if( s[i] != s[ s.length() -1] && rs.length() >=1) next(i+1,s,rs);
	}
}
