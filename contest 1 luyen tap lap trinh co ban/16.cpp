//so la ma :i=1,V=5,X=10,L=50,C=100,D=500,M=1000 
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int bo;
	cin>>bo;
	char s[20];
	int a[30];
	while(bo--){
		
		cin>>s;
		int len=strlen(s);
		for(int i=0;i<len;i++){
			char term=s[i];
		
			switch(term){
				case 'I':{
					a[i]=1;
					break;
				}
				case 'V':{
					a[i]=5;
					break;
				}
				case 'X':{
					a[i]=10;
					break;
				}
				case 'L':{
					a[i]=50;
					break;
				}
				case 'C':{
					a[i]=100;
					break;
				}
				case 'D':{
					a[i]=500;
					break;
				}
				case 'M':{
					a[i]=1000;
					break;
				}
				
				
			}
		
		
				
		}
			int k=a[len-1];
			for(int i=len-1;i>0;i--){
				if(a[i]>a[i-1]){
					k=k-a[i-1];
					cout<<a[i]<<endl;
				} 
				else if(a[i]==a[i-1]||a[i]<a[i-1])
					k=k+a[i-1];
			}
			cout<<k<<endl;
		
		
	}

	return 0;
}

