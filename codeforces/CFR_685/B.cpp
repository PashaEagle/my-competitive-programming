//Thu, 21th Nov, 2020 - Codeforces Round #685 (Div2). Finished 5479/15929.
//Task B.
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
    
    int t; cin >> t;
    while (t--) {
        ll n, q; cin >> n >> q;
        string s; cin >> s;
        int l, r;
        for (int i = 0; i < q; ++i) {
            cin >> l >> r;
            char subL = s[--l];
            char subR = s[--r];
            bool success = false;
            for (int j = 0; j < l; ++j) {
                if (s[j] == subL) {
                    cout << "YES" << endl;
                    success = true;
                    break;
                }
            }
            if (success) continue;
            for (int j = r+1; j < n; ++j) {
                if (s[j] == subR) {
                    cout << "YES" << endl;
                    success = true;
                    break;
                }
            }
            if (success) continue;
            else cout << "NO" << endl;
        }
        
    }
   
    return 0;
}
