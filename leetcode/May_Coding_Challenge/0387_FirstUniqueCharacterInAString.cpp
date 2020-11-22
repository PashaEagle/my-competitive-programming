// Tue, 5th May, 2020 - Leetcode May coding challenge, day #5
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m;
        vector<pair<char, int>> vec;
        for (int i = 0; s[i]; ++i) {
            if (!m.count(s[i]))
                vec.push_back(make_pair(s[i], i));    
            m[s[i]]++;
        }
        
        
        for (int i = 0; i < vec.size(); ++i) 
            if (m[vec[i].first] == 1) return vec[i].second;
        
        return -1;        
    }
};
