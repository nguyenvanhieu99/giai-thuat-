#include<iostream>

using namespace std;
int ma[9][9],re[9],res=0,max1=0;
bool check[20],xuo[20],ng[20];
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64
void init(){ 

//		for(int i=1;i<65;i++){
//			cout<<i<<" ";
//		}
		for(int i=0;i<20;++i){
			check[i]=true;
			xuo[i]=true;
			ng[i]=true;
			
		}
		for(int i=1;i<9;++i){
			for(int j=1;j<9;++j){
				cin>>ma[i][j];
			}
		}
		
}
void trackback(int i){
	for(int j=1;j<9;++j){
		if(check[j]&&xuo[i-j+9]&&ng[i+j]){
			re[i]=ma[i][j];
			max1+=re[i];
			check[j]=false;
			xuo[i-j+9]=false;
			ng[i+j]=false;
			if(i==8){
				if(max1>res)res=max1;
			}
			else{
				trackback(i+1);
			}
			max1-=re[i];
			check[j]=true;
			xuo[i-j+9]=true;
			ng[i+j]=true;
		}
	}
		
}
int main(){
	int bo;
	cin>>bo;
	while(bo--) {
		init();
		trackback(1);
		cout<<res;
	}

	return 0;
}

