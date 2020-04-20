// Mon, 20th April, 2020, solution #2 (O(N))
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
    int i = 0;
    TreeNode* bstFromPreorder(vector<int>& preorder, int maximum_val = INT_MAX) {
        
        if (i >= preorder.size() || preorder[i] > maximum_val) return NULL;
        TreeNode* node = new TreeNode(preorder[i++]);
        node->left =  bstFromPreorder(preorder, node->val);
        node->right = bstFromPreorder(preorder, maximum_val);
        return node;
    }
};
