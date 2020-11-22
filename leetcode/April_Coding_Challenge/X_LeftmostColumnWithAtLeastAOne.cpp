// Tue, 21th April, 2020
// After reading hint about optimal approach: using top-right to left-down pointer is genious!
/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        
        int leftMost = -1;
        vector<int> dimensions = binaryMatrix.dimensions();
        int n = dimensions[0]; int m = dimensions[1];
        int l = 0; int r = n-1; int mid = -123;
        set<int> actualRows;
        
        while (l <= r) {
            mid = (l + r) / 2;
            if ((l + r) & 1 == 1) mid++;
            
            if (actualRows.size() == 0) {
                for (int i = 0; i < n; ++i) {
                    if (binaryMatrix.get(i, mid) == 1) actualRows.insert(i);
                }
            } else {
                for (const int &row : actualRows) {
                    if (binaryMatrix.get(row, mid) == 0) actualRows.erase(row);
                }
            }

            if (actualRows.size() > 0) {
                r = mid - 1;
                leftMost = mid;
            } else {
                l = mid + 1;
            }
        }
        
        return leftMost;
    }
};
