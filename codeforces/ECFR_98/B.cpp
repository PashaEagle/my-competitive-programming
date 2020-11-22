//Thu, 19th Nov, 2020 - Educational Codeforces Round #98. Finished 5393/17844.
//Task B. Upsolved.
#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main()
{
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
    
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll sum = 0, mx = -1, x;
        for (int i=0; i<n; ++i) {
            cin >> x;
            mx = max(x, mx);
            sum += x;
        }
        
        ll mn = (sum % (n-1)) ? (sum / (n-1)) + 1 : sum / (n-1);
        ll amt = max(mx, mn);
        ll ans = amt * (n-1) - sum;
        cout << ans << endl;
    }
   
    return 0;
}