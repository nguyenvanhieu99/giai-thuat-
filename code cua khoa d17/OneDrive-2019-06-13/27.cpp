#include <iostream>
#include <queue>
#include <vector>
#include <functional>

#define M 1000000007
using namespace std;


int main()
{
	int n, x;
	std::priority_queue<long long, std::vector<long long>, std::greater<long long> > pq;
	
	cin >> n;
	for(int i=0; i<n; ++i){
		cin >> x;
		pq.push(x);
	}		
	
	long long a, b, tmp, s=0;
	while (pq.size()>1){
		a = pq.top(); pq.pop();
		b = pq.top(); pq.pop();
		tmp = (a+b)%M;
		s = (s+tmp)%M;
		pq.push(tmp);
	}
	
	cout << s;
	

	return 0; 
}
