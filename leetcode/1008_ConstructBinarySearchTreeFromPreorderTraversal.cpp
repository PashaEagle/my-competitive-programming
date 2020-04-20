// Mon, 20th April, 2020
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        TreeNode* root = new TreeNode(preorder[0]);
        TreeNode* temp = NULL;
        TreeNode* back = NULL;
        for (int i = 1; i < preorder.size(); ++i) {
            temp = root, back = root;
            while(temp != NULL) {
                back = temp;
                if (preorder[i] < temp->val) temp = temp->left;
                else temp = temp->right;
            }
            if (preorder[i] < back->val) back->left = new TreeNode(preorder[i]);
            else back->right = new TreeNode(preorder[i]);
        }
        
        return root;
    }
};
