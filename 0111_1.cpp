#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        v.push_back(m);
    }

    while (true) {
        bool flag = true;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] % 2 != 0) flag = false;
        }
        if (flag == false) {
            cout << cnt << endl;
            return 0;
        }
        else {
            for (int i = 0; i < v.size(); i++) {
                v[i] /= 2;
            }
            cnt += 1;
        }

    }


}