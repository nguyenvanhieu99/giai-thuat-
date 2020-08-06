#include<iostream>
#include<algorithm>
#include<string.h>

//#include<bits/stdc.h>
using namespace std;
int a[100000]={0};
int t=0;
//bool isPrime(int n) 
//{ 
//    if (n <= 1)  return false; 
//    for (int i = 2; i <=sqrt(n); i++) 
//        if (n % i == 0) return false; 
//    return true; 
//} 
//void printPrime(int n) 
//{ 	
//	
//    for (int i = 2; i <= n; i++) { 
//        if (isPrime(i)) 
//            a[t++]=i;
//    } 
//} 

bool prime[1000000]={true};
void SieveOfEratosthenes(int n) 
{ 
    //bool prime[n+1]; 
    //memset(prime, true, sizeof(prime)); 
  	prime[0]=prime[1]=false;
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
//    for (int p=2; p<=n; p++) 
//       if (prime[p]) {
//       	a[t++]=p;
//       	//cout<<p<<" ";
//	   }
          
}
int main(){
	SieveOfEratosthenes(1000000);
	int bo;cin>>bo;
	//printPrime(10000);
	
	while(bo--){
	int n,k;
	cin>>n;
//	int *s=upper_bound(a,a+t,n);
//	int vt=-(a-s);
//	bool ok =false;
//	for(int i=0;i<=vt;i++){
//		for(int j=i;j<=vt;j++){
//			int  term=a[i]+a[j];
//			if(term==n){
//				cout<<a[i]<<" "<<a[j]<<endl;
//				ok=true;
//				break;
//			}
//			
//		}
//		if(ok) break;
//	}
//	if(!ok) cout<<"-1"<<endl;
	bool ok=false;
	for(int i=0;i<n;i++)	{
		if(prime[i]&&prime[n-i]){
			cout<<i<<" "<<(n-i)<<endl;
			ok=true;
			break;
		}
	}
	if(!ok)	cout<<"-1"<<endl;
		
	}

	return 0;
}

