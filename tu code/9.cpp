//bai 9 :tim boi so 
#include<iostream>

using namespace std;
int n,k,bo,s;
int a[10],flat=9,res=0;
void init(){
	 s=10;
}
void out(){
	if(res>flat) res=flat;
}
//void trackback(int i){
//	 for(int j=0;j<2;++j){
//	 	int term=j;
//	 	if(term=1) term =9;
//	 		
//	 	a[i]=term;
//		flat=flat*10+a[i];
//	 	if(flat%n==0) out();
//	 	else trackback(i+1);
//	 	flat=(flat-a[i])/10;
//		
//	 }
//}
void sinh(){
	for(int i=0;i<n;++i){
		if()
	}
}
int main(){
	cin>>bo;
	while(bo--){
		cin>>n;
		init();
		trackback(1);
		cout<<res<"\n";
		
	}
	return 0;
}

