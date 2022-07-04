#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, c0, c1, h; cin >> n >> c0 >> c1 >> h;
    string s; cin >> s;
    int ans = 0;

    if (abs(c0 - c1) > h) {
        if (c0 < c1) {
            for (int i = 0; i < n; i++) {
                if (s[i] == '1') {
                    ans += h;
                }
            }
            ans += n * c0;
        }
        else {
            for (int i = 0; i < n; i++) {
                if (s[i] == '0') {
                    ans += h;
                }
            }
            ans += n * c1;

        }
    }
    else {
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                ans += c0;
            }
            else {
                ans += c1;
            }
        }

    }

    cout << ans << "\n";
}

int main()
{
    int t; cin >> t;
    while (t--) {
        solve();
    }
}



