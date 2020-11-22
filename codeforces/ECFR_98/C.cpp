//Thu, 19th Nov, 2020 - Educational Codeforces Round #98.  Finished 5393/17844.
//Task C.
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
   
    ll t; cin >> t;
    while (t--) {
        string s; cin >> s;
        ll res = 0;
        ll circle = 0, square = 0;
        for (int i = 0; s[i]; ++i) {
            if (s[i] == '(') ++circle;
            else if (s[i] == '[') ++square;
            else if (s[i] == ')') {
                if (circle > 0) {
                    --circle;
                    ++res;
                }
            }
            else {
                if (square > 0) {
                    --square;
                    ++res;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}