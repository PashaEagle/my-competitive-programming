class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int zc = 0;
        for (int i = 0; i < nums.size(); ++i){
            if (nums[i] == 0) {zc++; continue;}
            nums[i-zc] = nums[i];
        }
        
        for (int i = nums.size() - zc; i < nums.size(); ++i)
            nums[i] = 0;
    }
};
