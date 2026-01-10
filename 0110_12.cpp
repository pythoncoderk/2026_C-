#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        int a, b;
        cin >> a >> b;
        cout << a * b << endl;
    }
    else {
        int a, b;
        string s;
        cin >> s >> a >> b;

        cout << s << "!" << endl;
        cout << a * b << endl;
    }
}