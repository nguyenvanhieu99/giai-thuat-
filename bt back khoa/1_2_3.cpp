#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int x=n,y=n;
	if(n%2==0){
		if(x>3) x=0;
		else y=0;
	}
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;

	return 0;
}

