#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;

    for (int i = 0; i <= a; i++) {
        if ((n - i) % 500 == 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}