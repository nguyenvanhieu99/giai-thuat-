#include <iostream>
#include <string>
#include <vector>

#define K 1000000007

using namespace std;

void mul(long long F[2][2], long long M[2][2]){
	long long f00 = (F[0][0]*M[0][0] + F[0][1]*M[1][0])%K;
	long long f01 = (F[0][0]*M[0][1] + F[0][1]*M[1][1])%K;
	long long f10 = (F[1][0]*M[0][0] + F[1][1]*M[1][0])%K;
	long long f11 = (F[1][0]*M[0][1] + F[1][1]*M[1][1])%K;
	
	F[0][0] = f00;
	F[0][1] = f01;
	F[1][0] = f10;
	F[1][1] = f11;
}

void pow(long long F[2][2], int n){
	if (n==0 || n==1) return;
	
	pow(F, n/2);
	mul(F, F);
	if (n&1){
		long long M[2][2]={1, 1, 1, 0};
		mul(F, M);
	}
}

long long fib(int n){
	long long F[2][2]={1, 1, 1, 0};
	
	if (n==0) return 0;
	pow(F, n-1);
	return F[0][0];
}



int main()
{
	int t, n;
	
	cin >> t;
	while (t--){
		cin >> n;
		cout << fib(n) << endl;
	}
	return 0;
}
