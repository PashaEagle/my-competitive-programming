// Sun, 3rd May, 2020 - May coding challenge, day #3
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        for (int i = 0; magazine[i]; ++i) {
            if (m.count(magazine[i])) m[magazine[i]]++;
            else m[magazine[i]] = 1;
        }
        
        for (int i = 0; ransomNote[i]; ++i) {
            if (m.count(ransomNote[i]) && m[ransomNote[i]] > 0) m[ransomNote[i]]--;
            else return false;
        }
        return true;
    }
};
