#include<iostream>

#include<algorithm>

#include<queue>

using namespace std;

int main() {
    int bo;
    cin >> bo;
    queue < int > a;
    string s = "";
    while (bo--) {
        cin >> s;
        if (s == "PUSH") {
            int x;
            cin >> x;
            a.push(x);
        } else if (s == "PRINTFRONT") {
            if (a.empty()) cout << "NONE" << endl;
            else cout << a.front() << endl;
        } else if (s == "POP") {
            if (!a.empty()) {
                a.pop();
            }
        }
    }

    return 0;
}
