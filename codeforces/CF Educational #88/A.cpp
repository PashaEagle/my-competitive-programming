#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    int t; cin >> t;
    for (int t1 = 0; t1 < t; ++t1){
        double n, m, k;
        cin >> n >> m >> k;
        if (n/k >= m) {cout << m << endl; continue;}
        cout << (n/k) - ceil((m-(n/k)) / (k-1)) << endl;
    }
 
    return 0;
}
