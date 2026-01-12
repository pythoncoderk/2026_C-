#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Hello";

    str.at(0) = 'M';
    cout << str << endl;

    if (str.at(1) == 'e') {
        cout << "AtCoder" << endl;
    }
}