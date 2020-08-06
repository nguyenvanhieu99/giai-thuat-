#include <iostream>
#include <algorithm>
#include <bits/stdc.h>
using namespace std;
void trungto_hauto(string s)
{
	int n = s.length(), i;
	stack<char> st;
	string kq = "";
	for (i = 0; i < n; i++)
	{
		if (s[i] == '(')
			st.push(s[i]);
		else if (islower(s[i]))
			kq += s[i];
		else if (s[i] == ')')
		{
			while (!st.empty() && st.top() != '(')
			{
				char c = st.top();
				st.pop();
				kq += c;
			}
			if (st.top() == '(')
				st.pop();
		}
		else
		{
			while (!st.empty() && priority(s[i]) <= priority(st.top()))
			{
				char c = st.top();
				st.pop();
				kq += c;
			}
			st.push(s[i]);
		}
	}
	while (!st.empty() && st.top() != '(')
	{
		char c = st.top();
		st.pop();
		kq += c;
	}
	cout << kq << endl;
}
int main()
{
	int bo;
	cin >> bo;
	while (bo--)
	{
		string n;
		getline(cin,n);
		trungto_hauto(n);
		
	}

	return 0;
}
