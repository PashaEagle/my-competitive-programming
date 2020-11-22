// Wed, 22th April, 2020
// This problem was maybe the hardest one to understand for me ever. More than 2 hours I spent reading different editorials, but this solution is fucking genious!
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        long amount = 0; long sum = 0;
        unordered_map<long, long> prefix_sums_amount;
        prefix_sums_amount[0] = 1;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            if (prefix_sums_amount.count(sum - k)) 
                amount += prefix_sums_amount[sum - k];
            prefix_sums_amount[sum]++;
        }
        
        return amount;
    }
};
