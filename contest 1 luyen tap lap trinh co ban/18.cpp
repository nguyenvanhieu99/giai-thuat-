//bai 18. Vong tròn  
#include<iostream>
#include<cstring> 
#include<ctype.h>
using namespace std;

int main(){
	char s[52];
	cin>>s;
	int dem=0;
	int ma[52];
	
	for(int i=0;i<=52;++i){
		
		ma[i]=s[i]-65;
		
		//cout<<ma[i]<<" ";
		
	}
	//CHON CHU CAI
	for(int i=0;i<26;i++){
		int y;
		//TIM LAN XUAT HIEN DAU TIEN CUA CHU CAI
		for( y=0;y<52;++y){
			if(ma[y]==i) break; 
		}
		
		int j=y+1;
		
		int term[52]={0};
		
		bool check =true;
		//LAP DEN LAN XUAT HIEN THU HAI CUA CHU CAI 
		
		while(check){
			cout<<ma[j]<<" "	;
			if(ma[j]==i)  check=false;
			else{
				term[ma[j]]++;
			}
			j++;
			
		}
		
		cout<<endl;
		for(int t=0;t<52;++t){
		//	cout<<term[t]<<" ";
			if(term[t] == 2 );
			else dem+=term[t];
			
		} 
		
		
	}
	cout<<dem/2;
	return 0;
}

