// Tue, 14th April, 2020
class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {

        int left_shift = 0;
        for (int i = 0; i < shift.size(); ++i)
            if (shift[i][0] == 0) left_shift += shift[i][1];
            else                  left_shift -= shift[i][1];

        if (left_shift == 0) return s;
        else 
        {
            if (left_shift > 0) //abc => bca
            {
                left_shift %= s.size();
                return s.substr(left_shift, s.size() - left_shift) + s.substr(0, left_shift);    
            }
            else //abc => cab
            {
                left_shift = -left_shift;
                left_shift %= s.size();
                return s.substr(s.size() - left_shift) + s.substr(0, s.size() - left_shift);
            }
        }
    }
    
};
