#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < 10; i++) {
        if (i == 0) cout << n << " ";
        else if (i == 9) cout << n;
        else cout << n << " ";
        n += m;
    }
}