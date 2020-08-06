#include<iostream>

using namespace std;
int n, k, a[16] = {
    0
}, res[2000][15], t = 0;
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
    int dem = 0, solan = 0;
    a[n + 1] = 3;
    for (int i = 1; i <= n + 1; ++i) {
        if (a[i] == 0) {
            dem++;

        } else {
            if (dem > k || (dem == k && solan > 0)) return false;
            else if (dem == k) {

                solan++;

            }
            dem = 0;

        }
    }
    if (solan == 1) return true;
    else return false;
}
void out() {
    cout << t << endl;
    for (int l = 1; l <= t; ++l) {
        for (int i = 1; i <= n; ++i) {

            if (res[l][i] == 0) cout << "A";
            else cout << "B";

        }
        cout << endl;
    }
}
int main() {

    cin >> n >> k;
    while (ok) {

        if (check()) {
            t++;
            for (int i = 1; i <= n; ++i) {
                res[t][i] = a[i];

            }
        }

        sinh();

    }
    out();





    return 0;
}