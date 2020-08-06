#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	string s;
	vector<string> v;
	
	while (cin >> s)
		v.push_back(s);
	
	sort(v.begin(), v.end());
	vector<pair<string, int>> res;
	pair<string, int> p = {v[0], 1};
		
	for(int i=1; i<v.size(); ++i)
		if (v[i]==p.first) ++p.second;
		else{
			res.push_back(p);
			p = {v[i], 1};
		}	
	res.push_back(p);
		
	cout << res.size() << "\n";
	for(int i=0; i<res.size(); ++i)
		cout << res[i].first << " " << res[i].second << "\n";
		
	
		
	return 0;
	
}
