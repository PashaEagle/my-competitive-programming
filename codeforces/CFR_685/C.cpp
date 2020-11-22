//Thu, 21th Nov, 2020 - Codeforces Round #685 (Div2). Finished 5479/15929.
//Task C. Upsolved.
#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int cntA[1000];
int cntB[1000];
 
int main()
{
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
    
    int t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        string a, b;
        cin >> a >> b;
        for (int i = (int)'a'; i <= (int)'z'; ++i) {
            cntA[i] = 0;
            cntB[i] = 0;
        }
        for (int i = 0; a[i]; ++i) {
            ++cntA[(int)a[i]];
            ++cntB[(int)b[i]];
        }
        bool bad = false;
        for (int i = (int)'a'; i <= (int)'y'; ++i) {
            if (cntA[i] < cntB[i] || (cntA[i] - cntB[i]) % k) 
                {bad = true; break;}
            cntA[i+1] += (cntA[i] - cntB[i]);
        }
        cout << (bad ? "No" : "Yes") << endl;
    }
   
    return 0;
}

// My first implementation that got WA(4)
// int main()
// {
//     cin.tie(0); cout.tie(0);
//     ios_base::sync_with_stdio(false);
    
//     int t; cin >> t;
//     while (t--) {
//         ll n, k; cin >> n >> k;
//         string a, b;
//         cin >> a >> b;
//         if (a.compare(b) == 0) {cout << "Yes" << endl; continue;}
        
//         ll sumA = 0, sumB = 0;
//         for (int i = 0; i < n; ++i) {
//             sumA += (int)a[i];
//             sumB += (int)b[i];
//         }
//         if (sumB < sumA) {cout << "No" << endl; continue;}
//         if ((sumB - sumA) % k != 0) {cout << "No" << endl; continue;}
        
//         map<char, int> mA;
//         map<char, int> mB;
//         for (int i = 0; i < n; ++i) {
//             mA[a[i]]++;
//             mB[b[i]]++;
//         }
//         bool bb = false;
//         for( auto const& [key, val] : mA )
//         {
//             if (bb) {break;}
//             int amA = val;
//             int diff;
//             if (mB.count(key) == 0) {
//                 diff = amA;
//             } else {
//                 diff = abs(amA - mB[key]);
//             }
//             if (diff != 0 && k % diff != 0) {cout << "No" << endl; bb = true;}
//         }
//         for( auto const& [key, val] : mB )
//         {
//             if (bb) {break;}
//             int amB = val;
//             int diff;
//             if (mA.count(key) == 0) {
//                 diff = amB;
//             } else {
//                 diff = abs(amB - mA[key]);
//             }
//             if (diff != 0 && k % diff != 0) {cout << "No" << endl; bb = true;}
//         }
//         if (!bb) cout << "Yes" << endl;
//     }
   
//     return 0;
// }
