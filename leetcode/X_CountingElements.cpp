class Solution {
public:
    int countElements(vector<int>& arr) {
        
        unordered_set<int> sset;
        for (int i = 0; i < arr.size(); ++i)
            sset.insert(arr[i]);
        int res = 0;
        for (int i = 0; i < arr.size(); ++i)
            if (sset.find(arr[i] + 1) != sset.end()) res++;
        return res;
    }
};
