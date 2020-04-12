// Sun, 12th April, 2020
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        while(stones.size() > 1){
            sort(stones.begin(), stones.end());
            int diff = stones[stones.size() - 1] - stones[stones.size() - 2];
            stones.pop_back();
            if (diff == 0) stones.pop_back(); else stones[stones.size() - 1] = diff;
        }
        
        return stones.size() > 0 ? stones[0] : 0;
    }
};
