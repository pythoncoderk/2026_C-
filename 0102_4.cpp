#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.size() == 1) cout << "00" << s << endl;
    else if (s.size() == 2) cout << "0" << s << endl;
    else cout << s << endl;
}