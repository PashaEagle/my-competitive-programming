// Wed, 15th April, 2020
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int a, b;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> a >> b;
        if (a < b) cout << (b - a) << endl;
        else cout << (a % b == 0 ? 0 : b - (a % b)) << endl;
    }
}
