#include <iostream>
#define MAX 100
using namespace std;

long long res, L, R;



long long f(long long n)
{
	if (n==0 || n==1) return 1;
	else return f(n/2)*2+1;
}

void cal(long long n, long long& p){
	if (p>R) return;
	
	if (p+f(n)-1<L){
		p += f(n);
		return;
	}
	
	if (n==1){
		if (p>=L && p<=R) ++res;
		++p;
	
	} else{
	 	cal(n/2, p);
		if ((n&1) && (p>=L && p<=R)) ++res;
		cal(n/2, ++p); 
	}
}


int main()
{
	long long n, p;
	int t;
	

	cin >> t;
	while (t--){
		cin >> n >> L >> R;
		res=0; p=1;
		if (L==1 && R==f(n)) cout << n << endl;
		else {	
			cal(n, p);
			cout << res << endl;
		}
	}
	
	return 0;
}
