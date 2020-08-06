#include<iostream>

using namespace std;

int main(){
	int i=10;
	while(i<100){
		int n=i;
		int hangchuc,hangdv;
		
		hangdv=n%10;
		n=n/10;
		hangchuc=n%10;
	//	cout<<hangchuc<<"+"<<hangdv;
		int term=(hangchuc+hangdv)*2-(hangchuc*hangdv);
		if(term==0) cout<<i<<" ";
		i++;
	}

	return 0;
}

