class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int last = nums[0];
        
        for (int i = 1; i < nums.size(); ++i){
            last = max(nums[i], nums[i] + last);
            if (last > max_sum) max_sum = last;
        }
        return max_sum;
    }
    
    int max(int a, int b) {return a > b ? a : b;}
};
