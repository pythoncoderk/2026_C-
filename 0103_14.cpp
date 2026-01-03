#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n == m) cout << "eq" << endl;
    else cout << max(n, m) << endl;
}