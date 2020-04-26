// Sun, 26th April, 2020 
class Solution {
    public boolean canJump(int[] nums) {
        int n = nums.length;
        int[] dist = new int[n];
        
        for (int i = 0; i < n; ++i)
            if (nums[i] == 0) dist[i] = 0; else dist[i] = ((i + nums[i]) < n ? i + nums[i] : n - 1);
        
        dist[n-1] = 0;

        int pos = 0;
        while (pos < n-1) {
            if (dist[pos] == 0) return false;
            int max_index = pos+1;
            for (int i = pos+1; i <= dist[pos]; ++i){
                if (dist[i] >= dist[max_index]) max_index = i;
            }
            if (dist[max_index] < dist[pos]) pos = dist[pos]; else pos = max_index;
        }
        
        return true;
    }
}
