//Thu, 19th Nov, 2020 - Educational Codeforces Round #98. Finished 5393/17844.
//Task A.
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
   
    ll t; cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        ll res = (abs(x) + abs(y));
        ll maxx = max(abs(x), abs(y));
        ll minn = min(abs(x), abs(y));
        if (maxx - minn <= 1) cout << res << endl;
        else {
            res += maxx - minn - 1;
            cout << res << endl;
        }
        
    }
   
    return 0;
}
