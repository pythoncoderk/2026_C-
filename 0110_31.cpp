#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    int ans = a;
    for (int i = 0; i < n; i++) {
        string s;
        int x;
        cin >> s >> x;
        if (s == "+") {
            ans += x;
            cout << i+1 << ":" << ans << endl;
        }
        else if(s == "-") {
            ans -= x;
            cout << i+1 << ":" << ans << endl;
        }
        else if (s == "*") {
            ans *= x;
            cout << i+1 << ":" << ans << endl;
        }
        else if (s == "/") {
            if (x == 0) {
                cout << "error" << endl;
                return 0;
            }else{
                ans /= x;
                cout << i+1 << ":" << ans << endl;

            }
        }

    }

}