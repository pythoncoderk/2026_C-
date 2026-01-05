#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int check;
        cin >> check;
        sum += check;
        if (check >= k) cnt++;
    }
    if (cnt >= 3 && sum >= m) cout << "silver";
    else cout << "bronze" << endl;

}