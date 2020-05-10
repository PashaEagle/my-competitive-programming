// Sun, 10th May, 2020 - Kharkiv Open Cup 2020, #J
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n1, n2;
    cin >> n1 >> n2;
    if (n2 > n1) {cout << -1; return 0;}
    ll minn, maxx;
    minn = max(n1 * 50 - (50-1), n2 * 70 - (70-1));
    maxx = min(n1 * 50, n2 * 70);
    if (minn > maxx) {cout << -1; return 0;}
    ll min60 = minn / 60 + (minn % 60 == 0 ? 0 : 1);
    ll max60 = maxx / 60 + (maxx % 60 == 0 ? 0 : 1);
    // cout << minn << endl << maxx << endl << endl;
    for (int i = min60; i <= max60; ++i) cout << i << ' ';
    return 0;
}

