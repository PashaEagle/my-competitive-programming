// Thu, 23rd April, 2020, the smallest solution I've ever wrote, but not easiest problem
class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        long bit = m;
        for (long i = m; i < n; ++i) 
            if ((bit &= i) == 0) return 0;

        return bit & n;
    }
};
