//BAI 2 :NHAM CHU SO
#include<iostream>

using namespace std;
int a,b,amax,amin,bmax,bmin;
int doi5(int n){
	int ok=n;
	int res=n;
	int i=1;
	while(ok){
		
		int term=ok%10;
		ok=ok/10;
		if(term==5){
			res=res+i;
		}
		i=i*10;
		
	}
	//cout<<res<<endl;
	return res;
}
int doi6(int n){
	int ok=n;
	int res=n;
	int i=1;
	while(ok){
		
		int term=ok%10;
		ok=ok/10;
		if(term==6){
			res=res-i;
		}
		i=i*10;
		
	}
	//cout<<res<<endl;
	return res;
}
int main(){
	cin>>a>>b;
	int ok=a;
	int amax=doi5(a),bmax=doi5(b);
	int amin=doi6(a),bmin=doi6(b);
	cout<<amin+bmin<<" "<<amax+bmax;
	

	return 0;
}

