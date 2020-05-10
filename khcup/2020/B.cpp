// Sun, 10th May, 2020 Kharkiv Open Cup 2020, #B
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b) a ^= b ^= a ^= b; 
    for (int i = a; i <= b; ++i) {
        int t = i, t1, t2, t3, t4;
        t1 = t % 10;
        t2 = t / 10 % 10;
        t3 = t / 100 % 10;
        t4 = t / 1000 % 10;
        if (t1 == t2 && t1 == t3 ||
            t1 == t3 && t1 == t4 ||
            t1 == t2 && t1 == t4 ||
            t2 == t3 && t2 == t4)
        cout << i << '\n';
    }
    return 0;
}
