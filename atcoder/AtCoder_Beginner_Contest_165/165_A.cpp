#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);

    int k; cin >> k;
    int a, b; cin >> a >> b;

    if (a / k != b / k || a % k == 0 || b % k == 0) cout << "OK"; else cout << "NG";
    return 0;
}

