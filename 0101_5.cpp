#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    while (s.find("at") != string::npos) {
        int cnt = s.find("at");
        s.replace(cnt, 2,"@");
    }
    cout << s << endl;
}