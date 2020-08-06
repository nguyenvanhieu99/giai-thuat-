#include<iostream>

using namespace std;
int n, k, a[16] = {
    0
};
bool ok = true;
void sinh() {
    int i = n;
    while (a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i > 0) a[i] = 1;
    else ok = false;
}
bool check() {
    int dem = 0;
    for (int i = 1; i <= n; ++i) {
        dem += a[i];
    }
    if (dem == k) return true;
    else return false;
}
void out() {

    for (int i = 1; i <= n; ++i) {
        cout << a[i];
    }
    cout << endl;
}
int main() {
    int bo;
    cin >> bo;
    while (bo--) {
        cin >> n >> k;
        while (ok) {

            if (check()) out();

            sinh();

        }
        ok = true;



    }

    return 0;
}