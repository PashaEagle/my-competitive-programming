// Thu, 9th April, 2020
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        return calc(S) == calc(T);
    }
    
    string calc(string x) {
        int back_counter = 0;
        stringstream ss;
        for (int i = x.length() - 1; i >= 0; --i)
        {
            if (x[i] == '#') back_counter++;
            else if (back_counter > 0) back_counter--;
            else ss << x[i];
        }
        return ss.str();
    }
};
