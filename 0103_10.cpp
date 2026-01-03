#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    if (s == "km") cout << n * 1000 * 100 * 10 << endl;
    else if (s == "cm") cout << n * 100 * 10 << endl;
    else cout << n * 10 << endl;
}