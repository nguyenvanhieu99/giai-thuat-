#include<iostream>

using namespace std;
bool ok=false;
string a;
void out(){

	cout<<a<<endl;
}

void sinh(){
	int i=a.size()-1;
	
	while(i>=0&&a[i]=='1'){
		a[i]='0';
		i--;
	}
	if(i>=0){
		a[i]='1';
	}else{
		ok=true;
	}
	out();

}

int main(){
	int bo ;cin>>bo;
	while(bo--){
		cin>> a;
		sinh();
	}
	return 0;

}
