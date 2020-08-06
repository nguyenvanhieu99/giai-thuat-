//bai 34:sap xep quan hau 2
#include<iostream>

using namespace std;
int bo,a[9][9],s[30]={0},dem=0;
int doc[30],cheo1[30],cheo2[30];
void init(){
	dem=0;
	int tam=0;
	for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++){
				//tam++;
				//a[i][j]=tam;
				//cout<<a[i][j]<<" ";
				cin>>a[i][j];
			}
		//	cout<<endl;
	}
	for(int i=0;i<30;i++) {
		s[i]=0;
		doc[i]=0;
		cheo1[i]=0;
		cheo2[i]=0;
	}
	
		
	
}
void check(){
	int term=0;
	for(int i=1;i<=8;i++){
		
		term+=a[i][s[i]];
		//cout<<s[i]<<" ";
	}
//	cout<<endl;
	
	if(term>dem) dem=term;
}
void trackback(int i){
	for(int j=1;j<=8;j++){
		if(!doc[j]&&!cheo1[i+j-1]&&!cheo2[i-j+8]){
			doc[j]=1;
			cheo1[i+j-1]=1;
			cheo2[i-j+8]=1;
			s[i]=j;
			if(i==8) check();
			else trackback(i+1);
			doc[j]=0;
			cheo1[i+j-1]=0;
			cheo2[i-j+8]=0;
			
		}		
	}
}
int main(){
	cin>>bo;
	while(bo--){
		init();
		trackback(1);
		cout<<dem<<endl;	
		
	}

	return 0;
}

