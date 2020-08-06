//Bai 17:Tim boi so chi chua 0 va 9
#include<iostream>

using namespace std;
int k,a[1000000]={0},n=1;
bool check=true,ok=true;
void sinh(){
	int i=n;
	while(a[i]==1){
		
		a[i]=0;
		i--;
		
	}
	if(i>0) a[i]=1;
	else check=false;
	
}
void out(){
	for(int i=1;i<=n;++i){
		if(a[i]==0) cout<<"0";
		else cout<<"9";
	}
	cout<<endl;


}
bool tinh(){
	long long term=0;
	for(int i=1;i<=n;++i){
		cout<<a[i]<<"("<<i<<")"<<" ";
		term=term*10+a[i]*9;
	}
	cout<<endl;
	
	if(term%k==0) return true;
	else return false;
}

int main(){
	int bo;
	cin>>bo;
	while(bo--){
		cin>>k;
		
		while(ok)	{
			a[n]=1;
			
			if(!check){
				n++;
				for(int i=1;i<=n;i++){
					if(i<n)
					a[i]=0;
					else a[i]=1;
				}
				check=true;
			}
			if(tinh()) {
				out();
				break;
			}
			sinh();
		}
		check=true;
		n=1;
	}

	return 0;
}

