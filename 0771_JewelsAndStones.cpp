// Sun, 3rd May, 2020
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> s; int amt = 0;
        for (int i = 0; J[i]; ++i) s.insert(J[i]);
        for (int i = 0; S[i]; ++i) if (s.count(S[i])) amt++;
        return amt;
    }
};
