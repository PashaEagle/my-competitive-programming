class Solution {
public:
    bool isHappy(int n) {
        int s = n; int f = n;
        do{
            s = calc(s);
            f = calc(calc(f));
            if (s == 1 || f == 1) return true;
        } while (s != f);
        return false;
    }
    
    int calc(int n) {
        int sum = 0;
        while (n > 0){
            int x = n % 10;
            sum += x * x;
            n /= 10;
        }
        return sum;
    }
};
