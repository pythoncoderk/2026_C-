#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        sum += min(m * 2, abs(b - m) * 2);

    }
    cout << sum << endl;
}