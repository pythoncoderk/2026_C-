#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << "Hello";

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (i == 0) cout << " ";

        if (i == n - 1) cout << s << ".";
        else cout << s << ",";
    }

}