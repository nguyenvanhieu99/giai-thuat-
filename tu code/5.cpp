//Bai 5:Chon so tu ma tran vuong cap n 
#include<iostream>

using namespace std;
int n,k,a[15][15];
int re[15][15],to[15],s=0,dem=0;
bool check[15];

void init(){
	cin>>n>>k;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			int term;
			cin>>term;
			a[i][j]=term;
		}
	}
	for(int i=1;i<=n;++i){
		to[i]=0;
		check[i]=true;
	}
}
void update(){
	dem++;
	for(int z=1;z<=n;++z){
		re[dem][z]=to[z];
	}
}
void trackback(int i){
	for(int j=1;j<=n;++j){
		
		if(check[j]){
		
		to[i]= j ;
		check[j]=false;
		s+=a[i][j];
		if(i<n && s<=k ) trackback(i+1);
		else if(s==k) update();
		
		s-=a[i][j];
		check[j]=true;
		}
		
	}
}

void out(){
	cout<<dem<<"\n";
	for(int i=1;i<=dem;++i){
		for(int j=1;j<=n;++j){
			cout<<re[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main(){
	init();
	trackback(1);
	out();
	return 0;
}

