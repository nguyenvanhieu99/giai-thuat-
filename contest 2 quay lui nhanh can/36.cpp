#include<iostream>

using namespace std;
int x[100],a[100] ;
bool ok=false,chuaxet[100]={false} ;
void checklai(int i){
	
}
int term=0;
void check(int tr,int sa){
	if(sa==6) return ;
	if(x[sa-1]==1){
		//cout<<tr<<"+"<<sa<<endl;
		term=tr+a[ sa ];
	}
	else if(x[sa-1]==2) {
		//cout<<tr<<"-"<<sa<<endl;
		term=tr-a[sa];
	}
	else if(x[sa-1]==3) {
		//cout<<tr<<"*"<<sa<<endl;
		term=tr*a[sa];
	}
	check(term,sa+1);
	
	
//	for(int i=2;i<=4;++i){
//		switch(x[i]){
//			case 1:{
//				
//				term=term+a[i+1];
//				break;
//			}
//			case 2:{
//				term=term-a[i];
//				break;
//			}
//			case 3:{
//				term=term*a[i+1];
//				break;
//			}
//		} 
//			
//	}
//	if(term==23)return true;
//	else return false;
}
void out(){
	for(int i=1;i<5;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
void trackback(int i){
	if (ok) return;
	for(int j=1;j<=3;j++){
			x[i]=j;
			//cout<<i;
			if(i==4){
			//	cout<<"$";
				//out();
				check(a[1],2);
				if(term==23) ok=true;
				//cout<<term<<" ";
				term=0;
			}
			else trackback(i+1);
		
		
	}
}
int main(){
	int bo;
	cin>>bo;
	while(bo--){
		
		for(int i=1;i<=5;i++){
			cin>>a[i];
		}
		trackback(1);
		if(ok)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		ok=false;
		
	} 
	 
	return 0;
}

