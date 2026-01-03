#include <bits/stdc++.h>
using namespace std;

int main() {
    char s;
    cin >> s;
    string s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < s1.size(); i++) {
        if (s == s1[i]) cout << i + 1 << endl;
    }
}