#include<iostream>

#include<algorithm>
 //#include<bits/stdc.h>
#include<stack>

using namespace std;
bool check(string s) {
    stack < int > a;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') a.push(i);
        else if (s[i] == ')') {
            if (!a.empty()) {
                int j = a.top();
                a.pop();
                if (i - j == 2) return false;
                else if (s[i + 1] == ')' && s[j - 1] == '(') return false;
            }


        }
    }
    return true;
}
int main() {
    int bo;
    cin >> bo;
    cin.ignore();
    while (bo--) {
        string s;
        getline(cin, s);
        if (check(s)) cout << "No" << endl;
        else cout << "Yes" << endl;
    }

    return 0;
}