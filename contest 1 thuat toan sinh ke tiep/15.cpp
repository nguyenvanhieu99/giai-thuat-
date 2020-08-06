#include<iostream>

#include<cstring>

using namespace std;

int stt;
char a[81];
bool ok=true;
void sinh(){
	
	int i=strlen(a)-1;
	
	while(a[i]<=a[i-1]) i--;
	if((i-1)>=0){
		
		int j=strlen(a)-1;
		while(a[i-1]>=a[j])  j--;
		swap(a[i-1],a[j]);
		int r=i,d= strlen(a)-1;
		while(r<d) {
			
			swap(a[r],a[d]);
			
			r++;d--;
			
		}
	}else{
		ok =false;
	}
	
}
void out(){
	if(ok){
	for(int i=0;i<strlen(a);i++){
		cout<<a[i];
	    }
    }
	else{
		cout<<"BIGGEST";
	}
}
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		cin>>stt>>a;
		cout<<stt<<" ";
		sinh();
		out();
		cout<<endl;
		ok=true;
	}
	
	return 0;
	
}
