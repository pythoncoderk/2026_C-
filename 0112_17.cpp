#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int p = 0;
    int m = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == '+') p++;
        else if (s.at(i) == '-') m++;
    }
    cout << 1 + p - m << endl;
}