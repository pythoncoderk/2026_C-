#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int i = a;

    while (i >= 0) {
        if (i == a) {
            cout << "A:";
            i--;
        }else {
            cout << "]";
            i--;
        }
    }
    cout << endl;
    i = b;
    while (i >= 0) {
        if (i == b) {
            cout << "B:";
            i--;
        }else{
            cout << "]";
            i--;
        }

    }
    cout << endl;
}