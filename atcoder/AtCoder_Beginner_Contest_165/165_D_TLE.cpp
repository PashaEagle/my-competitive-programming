#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);

    ll a, b, n;
    cin >> a >> b >> n;

    ll maxx = LONG_MIN; ll x = 0;

    for (int i = 1; i <= n; ++i) {
        x = floor(a*i/b) - a*floor(i/b);
        if (x > maxx) maxx = x;
        if (i > b) break;
        //cout << x << " ";
    }

    cout << maxx;

    return 0;
}

