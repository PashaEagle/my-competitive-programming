// Sun, 3rd May, 2020 - Leetcode Weekly Contest 187, #B
class Solution {
    public boolean kLengthApart(int[] nums, int k) {
        int count = k;
        for (int i = 0; i < nums.length; ++i) {
            if (nums[i] == 1) {if (count >= k) count = 0; else return false;}
            else count++;
        }
        return true;
    }
}
