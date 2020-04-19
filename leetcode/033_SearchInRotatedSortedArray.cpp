// Sun, 19th April, 2020
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        if (nums.size() == 0) return -1;
        if (nums.size() == 1) {
            if (nums[0] == target) return 0;
            else return -1;
        }
        
        int l = 0, h = nums.size() - 1, mid;
        while(l < h) {
            mid = (l + h) / 2;
            if (nums[mid] < nums[h]) h = mid;
            else l = mid + 1;
        }
        
        int rotated = l;
        cout << rotated;
        int sz = nums.size(); int realmid = 0;
        l = 0 + rotated, h = nums.size() - 1 + rotated;
        while(l < h) {
            mid = ((l + h) / 2);
            realmid = (mid) % sz;
            if (nums[realmid] == target) return realmid;
            if (nums[realmid] < target) l = (mid + 1);
            else h = (mid);
        }
        if (nums[l % sz] == target) return l % sz;
        return -1;
    }
};
