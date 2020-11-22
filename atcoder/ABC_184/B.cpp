//Sun, 22nd Nov, 2020 - Atcoder Beginner Contest #184 - participated for only 20 mins :)
//Task B.
#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int n, x; string s;
    cin >> n >> x >> s;
    for (int i = 0; s[i]; ++i) {
        if (s[i] == 'o') ++x;
        else if (x > 0) --x;
    }
    cout << x;
    
    return 0;
}
