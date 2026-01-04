#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i == 0) cnt = x;
        else {
            if (cnt == 2 && x == 0) v.push_back(i);
        }
    }
    if (v.size() == 0) cout << -1 << endl;
    else {
        for (int i = 0; i < v.size(); i++) {
            if (i == v.size() - 1) cout << v[i]<< endl;
            else cout << v[i] << " ";
    }


    }
}