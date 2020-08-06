#include<iostream>

using namespace std;
int n;int a[100][100]={0},s[100]={0};
int dem=0,doc[100]={0},cheo1[200]={0},cheo2[200]={0};
void trackback(int i){
	for(int j=1;j<=n;++j){
		if(!doc[j]&&!cheo1[i+j-1]&&!cheo2[i-j+n]){
			doc[j]=1;
			cheo1[i+j-1]=1;
			cheo2[i-j+n]=1;
			s[i]=j;
			if(i==n) dem++;
			else trackback(i+1);
			
			doc[j]=0;
			cheo1[i+j-1]=0;
			cheo2[i-j+n]=0;
					
		}
	}
}
int main(){
	cin>>n;
	trackback(1);
	cout<<dem<<endl;
	return 0;
}

