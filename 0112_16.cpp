#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int sum = 0;
    int x = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == '+') sum += x;
        else if (s.at(i) == '-') sum -= x;
        else {
            int y = s.at(i) - '0';
            x = y;
        }

    }
    cout << sum << endl;
}