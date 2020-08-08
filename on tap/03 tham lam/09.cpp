#include<iostream>
#include<algorithm>
using namespace std;

struct cv{
	int id;
	int deadline;
	int profit;
}
bool com(cv a1 ,cv a2){
	return  a1.profit>a2.profit;
	
}
int main(){
	int bo;cin>>bo--;
	while(bo--){
		int n,co=0,res=0;
		cin>>n;
		cv a[n];
		bool check[1500]={false};
		for(int i=0;i<n;i++){
			cin>>a[i].id>>a[i].deadline>>a[i].profit;
		}
		sort(a,a+n,com);
		for(int i=0;i<n;i++){
			int term =a[i].deadline;
			while(term>0&& check[term]) term--;
			if(!check[term]&&term!=0){
				co++;
				res+=a[i].profit;
				check[term]=true;
			}
		}
		cout<<co<<" "<<endl;

	}

	return 0;
} 

