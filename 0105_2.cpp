#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        v.push_back(m);
    }
    vector<int> v1;
    for (int i = 0; i < v.size()-1; i++) {
        if (v[i] == 2 && v[i+1] == 0) v1.push_back(i + 1);
    }
    if (v1.size() == 0) cout << "-1" << endl;
    else {
        for (int i = 0; i < v1.size(); i++) {
            if (i == v1.size() - 1) cout << v1[i] << endl;
            else cout << v1[i] << " ";
        }
    }
}