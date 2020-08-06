#include<iostream>

using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	max=a;
	min=b;
	if(a<b) swap(a,b);
	cout<<"max:"<<max<<endl;
	cout<<"min:"<<min<<endl;
	return 0;
}

