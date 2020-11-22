#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);

    ll finish; cin >> finish;
    ll debet = 100; int year = 0;
    while (debet < finish) {
        debet += debet * 0.01;
        ++year;
    }

    cout << year;

    return 0;
}

