// Sun, 26th April, 2020
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int **a = new int*[text1.length() + 1];
        for (int i = 0; i < text1.length() + 1; ++i)
            a[i] = new int[text2.length() + 1];
        
        //std::fill(&a[0][0], &a[0][0] + (sizeof(a) / sizeof(a[0][0])), 0);
        //memset(a, 0, sizeof(a[0][0]) * text1.length() * text2.length());
        
        for (int i = 0; i < text1.length() + 1; ++i)
            for (int j = 0; j < text2.length() + 1; ++j)
                a[i][j] = 0;
                
        for (int i = 1; i < text1.length() + 1; ++i){
            for (int j = 1; j < text2.length() + 1; ++j){
                
                if (text1[i - 1] == text2[j - 1]) a[i][j] = a[i - 1][j - 1] + 1;
                else a[i][j] = max(a[i - 1][j], a[i][j - 1]);
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        
        return a[text1.length()][text2.length()];
    }
            
            
    int max(int a, int b){
        
        return a > b ? a : b;
    }
};

