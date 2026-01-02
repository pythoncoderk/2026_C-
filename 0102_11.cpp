#include <bits/stdc++.h>
using namespace std;

int main() {
    int n[4];
    for (int i = 0; i < 5; i++) {
        cin >> n[i];
    }
    int m = n[0];
    int mi = n[0];
    for (int i = 1; i < 5; i++) {
        m = max(m, n[i]);
    }
    for (int i = 0; i < 5; i++) {
        mi = min(mi, n[i]);
    }
    cout << m << endl;
    cout << mi << endl;

}