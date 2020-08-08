#include <iostream>
#include <string>
#define MAX 100
using namespace std;

char x[20];
int k, n, s=0, cnt=0;
bool mark1=false, mark2=false, mark=false;
string res;

void update(){
	++cnt;
	for(int i=1; i<=n; ++i)
		res += x[i];
}

void backTrack(int i){
	for(char c='A'; c<='B'; c++){
		x[i] = c;
		
		bool m=mark, m1=mark1, m2=mark2, tmp=s;
		if (c=='A'){
			if (!mark){
				mark = true;
				s=1;
			}else{
				++s;
				if (s>=k){
					if (!mark1) mark1 = true;
					else mark2 = true;
				}
			}
		} else mark = false;
	
		if (i<n && !mark2) backTrack(i+1);
		else if (i==n && mark1 && !mark2) update();
		
		mark = m; mark1 = m1; mark2 = m2; s = tmp;
	}
}

void output(){
	cout << cnt << endl;
	int k=0;
	for(int i=0; i<cnt; ++i){
		for(int j=0; j<n; ++j)
			cout << res[k++];
		cout << endl;
	}
}

int main()
{
	cin >> n >> k;

	backTrack(1);
	output();
	return 0;
}


