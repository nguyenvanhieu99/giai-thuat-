#include <iostream>
#include <string>

using namespace std;

void init(){
	string str1, str2;
	
	cin >> str1 >> str2;
	if (str1.find(str2)!=std::string::npos)
		cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--){
		init();
	}

	return 0;
}
