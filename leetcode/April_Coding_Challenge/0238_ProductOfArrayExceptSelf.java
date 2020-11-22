// Wed, 15th April, 2020
class Solution {
    public int[] productExceptSelf(int[] nums) {
        
        int zeroes = 0; long prod = 1; int zero_pos = 0;
        for (int i = 0; i < nums.length; ++i)
        {
            if (nums[i] == 0) { zeroes++; if (zeroes == 1) zero_pos = i;}
            else prod *= nums[i];
        }
        
        if (zeroes >= 2) {
            Arrays.fill(nums, 0);
            return nums;
        }
        if (zeroes == 1) {
            Arrays.fill(nums, 0);
            nums[zero_pos] = (int)prod;
            return nums;
        }
        for (int i = 0; i < nums.length; ++i){
            nums[i] = (int)(prod / nums[i]);
        }
        return nums;
    }
}
