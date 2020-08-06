//liet ke va de so chi chua 2 3 5 7 dem so lan xuat hien 
#include<iostream>

using namespace std;
int bo,a[50000],b[50000],n=0;
void out(){
	for(int i=0;i<n;++i){
		cout<<a[i]<<" "<<b[i]<<endl;
	}
}
int  dung(){
	
	int k=bo;
	
	while(k>0){
		int term1=k%10;
	//	cout<<bo<<" "<<k<<" "<<endl;
		if(term1==2||term1==3||term1==5||term1==7);
		else return 0;
													
			k=k/10 ;		     
	}		 	
	return 1; 
	//cout<<endl;
}
int main(){
	int  t;
	cin>>t;
	while(t--){
		cin>>bo;
		if(dung()){
			int term=0;
			for(int i=0;i<n;++i){
				
			 if(a[i]==bo){
			 	b[i]++;
			 	term=1;
			 	break;
			 }
			 
			}
			
			if(term==0){
				a[n]=bo;
				b[n]=1;
				n++;
			}
			
		}
		
		
	}
	out();
	return 0;
}

