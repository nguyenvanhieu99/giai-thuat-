//HOAN VI KE TIEP 
#include<iostream>

using namespace std;
int n, a[1000] = {
    0
};
void next() {
    int i = n - 1;

    while (i > 0 && a[i] > a[i + 1]) i--;
    if (i > 0) {
        int j = n;
        while (a[j] < a[i]) j--;
        swap(a[j], a[i]);
        int r = i + 1, s = n;
        while ((r <= s)) {
            swap(a[r], a[s]);
            r++, s--;
        }

    } else {
        for (int i = 1; i <= n; ++i) {
            a[i] = i;
        }
    }
}
void out() {
    for (int i = 1; i <= n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main() {
    int bo;
    cin >> bo;
    while (bo--) {
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        next();
        out();
    }

    return 0;
}
