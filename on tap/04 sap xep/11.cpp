#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;
void com(int a,int b){
	return abs(a)<abs(b);
}
int tinh(int *a,int n){
	int min=a[1]+a[0];
	for(int i=1;i<n;i++){
		int term=a[i]+a[i-1];
		if(abs(term)<= abs(min)) min =term;
	}

}
int main(){
	int bo ;cin>>bo;
	while(bo--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,com);
		cout<<tinh(a,n)<<endl;
	}
}
