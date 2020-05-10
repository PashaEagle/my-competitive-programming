// Sun, 10th May, 2020 - Kharkiv Open Cup 2020, #G
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t, l, r;
    cin >> l >> r >> t;
    ll diff = r - l;
    ll val = diff / t;
    ll rest = diff % t;
    if (l / t != (l + rest) / t || l % t == 0) cout << val + 1; else cout << val;
    return 0;
}
