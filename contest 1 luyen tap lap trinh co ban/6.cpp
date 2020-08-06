//ma tran xoan oc
#include<iostream>

using namespace std;

int main(){
	int bo;
	cin>>bo;
	int n,term=0;
	while(bo--){
		term++;
		
		cin>>n;
		cout<<"Test "<<term<<":"<<endl;
		int tong=n*n,ma[n][n],t=1,d=n;
		while(tong>=1){
			//cout<<"/n"<<tong;
			for(int i=t ;i<=d;i++){
				int term=t;
				ma[t][i]=tong;
				
				//cout<<"\n (1)"<<i<<" "<<term<<"  "<<tong<<endl;
				tong--;
			}
			for(int i=t+1;i<=d;i++){
				ma[i][d]=tong;
			//	cout<<"\n(2)"<<i<<" "<<d<<"  "<<tong;
				tong--;
				
			}
			for(int i=d-1;i>=t;i--){
				ma[d][i]=tong;
			//	cout<<"\n(3)"<<d<<" "<<i<<"  "<<tong;
				tong--;
			}
			for(int i=d-1;i>=t+1;i--){
				ma[i][t]=tong;
			//	cout<<"\n(4)"<<i<<" "<<d<<"  "<<tong;
				tong--;
			}
			t++;d--;
			
		}
		for(int x=1;x<=n;++x){
			for(int y=1;y<=n;++y){
				cout<<ma[x][y]<<" ";
			}
			cout<<endl;
		}
			
		
	}

	return 0;
}

