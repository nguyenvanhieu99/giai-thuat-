#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Nhap vao 1 so:";
	cin>>n;
	if(n>0){
		if(n%2==0) cout<<n<<" la so duong chan";
		else cout<<n<<"la so duong  le ";
	}
	else if(n==0) cout<<n<<"la so chan";
	else
	{
//		if(n%2==0) cout<<"So am chan";
//		else cout<<"So am  le ";
		cout<<"so am";
	}

	return 0;
}

