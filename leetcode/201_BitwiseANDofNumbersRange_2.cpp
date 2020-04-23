// Thu, 23rd April, 2020, more elegant solution
class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        long time = 1;
        for (;m != n; m >>= 1, n >>= 1, time <<= 1);
        return m * time;
    }
};
