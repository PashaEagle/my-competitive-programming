#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    int t; cin >> t;
    for (int t1 = 0; t1 < t; ++t1) {
        char a[1001];
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) cin >> a[j];
            for (int j = 0; j < m; ++j) {
                if (a[j] == '.') {
                    if (j < m-1 && a[j+1] == '.') {
                        if (y <= x*2) {
                            sum += y;
                            ++j;
                        } else {
                            sum += x;
                        }
                    } else {
                        sum += x;
                    }
                }
            }
 
 
        }
        cout << sum << endl;
    }
 
    return 0;
}
