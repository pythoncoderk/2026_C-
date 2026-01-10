#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        cnt += c - '0';
    }
    int ans = stoi(s);
    if (ans % cnt == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}