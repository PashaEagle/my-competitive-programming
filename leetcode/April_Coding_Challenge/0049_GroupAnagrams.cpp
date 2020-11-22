class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        std::unordered_map <string, vector<int>> hashmap;
        for (int i = 0; i < strs.size(); ++i){
            string sorted_word = strs[i];
            std::sort(sorted_word.begin(), sorted_word.end());
            hashmap[sorted_word].push_back(i);
        }
        
        vector<vector<string>> result; int j = 0;
        for (auto const& x : hashmap){
            vector<string> temp;
            for (int i = 0; i < x.second.size(); ++i){
                temp.push_back(strs[x.second[i]]);
            }
            result.push_back(temp);
        }
        
        return result;
    }
};
