#include <iostream>

using namespace std;

void rev(string &s){
	for(int i=s.length()-1; i>=0; --i)
		cout << s[i];
	cout << " ";
}

int main()
{
	string s;
	while (cin >> s)
		rev(s);
	
	return 0;
}
