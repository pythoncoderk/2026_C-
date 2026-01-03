#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < 9; i++) {
        if (i == 8) cout << n + n * i << endl;
        else cout << n + i * n << " ";
    }
}