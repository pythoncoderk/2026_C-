#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int x;
    int i = 0;

    while (i < n) {
        cin >> x;
        sum += x;
        i++;
    }
    cout << sum << endl;
}