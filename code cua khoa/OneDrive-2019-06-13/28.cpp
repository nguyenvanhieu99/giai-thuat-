#include <iostream>
#include <string>

using namespace std;

string add(string a, string b){
	while (a.length()<b.length()) a='0'+a;
	while (b.length()<a.length()) b='0'+b;
	
	string c;
	long long s, cr=0;
	for(int i=a.length()-1; i>=0; i--){
		s = a[i]+b[i]-2*'0'+cr;
		cr = s/10;
		c = char(s%10+'0')+c;
	}
	if (cr) c='1'+c;
	return c;
}

string minab(string a, string b){
	for(auto &c:a)
		if (c=='6') c='5';
	for(auto &c:b)
		if (c=='6') c='5';
	return add(a, b);	
}

string maxab(string a, string b){
	for(auto &c:a)
		if (c=='5') c='6';
	for(auto &c:b)
		if (c=='5') c='6';
	return add(a, b);	
}

int main()
{
	
	string a, b;
	cin >> a >> b;
	cout << minab(a, b) << " " << maxab(a, b);
	
	
	return 0;
}
