#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int cnt = 1;

    for (int i = 0; i < n; i++) {
        if (cnt * 2 < cnt + k) cnt *= 2;
        else cnt += k;
    }
    cout << cnt << endl;
}