//Thu, 16th April, 2020
class Solution {
public:
    bool checkValidString(string s) {
        
        int low_bound = 0, high_bound = 0;
        for (int i = 0; s[i]; ++i)
        {
            if (s[i] == '(') {low_bound++; high_bound++;}
            else if (s[i] == ')') {low_bound--; high_bound--;}
            else {low_bound--; high_bound++;}
            
            if (low_bound < 0) low_bound = 0;
            if (high_bound < 0) return false;
        }
        
        return low_bound == 0;
    }
};
