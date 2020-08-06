//8.1:fibonaccy ham
#include<iostream>

using namespace std;
int n;
void nextfibo(long long ma[]){
	int i=2;
	int term=n;
	while(term--){
		ma[i]=ma[i-1]+ma[i-2];
		i++;
	}
}
int main(){
	cin>>n;
	long long ma[n];
	ma[0]=1;
	ma[1]=1;
	nextfibo(ma);
	for(int i=0;i<n;++i){
		cout<<ma[i]<<" ";
	}
	return 0;
}

