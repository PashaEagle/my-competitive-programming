// Sun, 10th May, 2020 - Kharkiv Open Cup 2020, #M
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll a1, a2, a3;
    ll b1, b2, b3;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    ll maxa = max(a1, max(a2, a3));
    ll maxb = max(b1, max(b2, b3));
    if (a2 == maxa) a1 ^= a2 ^= a1 ^= a2; else if (a3 == maxa) a1 ^= a3 ^= a1 ^= a3;
    if (b2 == maxb) b1 ^= b2 ^= b1 ^= b2; else if (b3 == maxb) b1 ^= b3 ^= b1 ^= b3;
    ll res = a2 + a3 + b2 + b3;
    // cout << maxa << maxb << endl;
    if (maxa != maxb) res += abs(maxa-maxb);
    cout << res;
    return 0;
}
