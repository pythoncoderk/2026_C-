#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Hello";

    char c = str.at(0);
    cout << str + c << endl;

    str.at(0) = 'M';
    cout << str << endl;
}