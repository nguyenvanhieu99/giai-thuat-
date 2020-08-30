#include<iostream>

using namespace std;
string n;
bool ok;
void sinh(){
	int i=n.size()-1;
	while(i>=0&&n[i]=='0'){
		n[i]='1';
		i--;
	}
	if(i>=0)
		n[i]='0';
	else ok=false;
	
}
void out(){
	int k=n.size();
	for(int i=0;i<k;i++ ){
		cout<<n[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int bo ;cin>>bo;
	while(bo--){
		cin>>n;
		sinh();
//		out();
		cout<<n<<endl;
	}
	return 0;
}
