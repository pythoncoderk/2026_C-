#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int cnt = 0;

    for (int i = n; i <= m; i++) {
        string s1 = to_string(i);
        string s2 = to_string(i);

        reverse(s2.begin(), s2.end());

        if (s1 == s2) cnt++;
    }
    cout << cnt << endl;
}