//Thu, 21th Nov, 2020 - Codeforces Round #685 (Div2). Finished 5479/15929.
//Task A.
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
        if (n == 1) 
            cout << 0 << endl;
        else if (n == 2) 
            cout << 1 << endl;
        else if (n == 3)
            cout << 2 << endl;
        else if (n % 2 == 0) 
            cout << 2 << endl;
        else 
            cout << 3 << endl;
        
    }
   
    return 0;
}
