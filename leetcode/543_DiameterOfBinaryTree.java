// Sun, 12th April, 2020
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    
    private int  max = 0;
    public int diameterOfBinaryTree(TreeNode root) 
    {
        if (root == null) return 0;
        int rootLeftLen = root.left != null ? iterate(root.left) : 0;
        int rootRightLen = root.right != null ? iterate(root.right) : 0;
        if (rootLeftLen + rootRightLen > max) max = rootLeftLen + rootRightLen;
        return max;
    }
    
    private int iterate(TreeNode node) 
    {
        int leftLen, rightLen;
        
        if (node.left != null) 
            leftLen = iterate(node.left);
        else 
            leftLen = 0;
        
        if (node.right != null)
            rightLen = iterate(node.right);
        else 
            rightLen = 0;
        
        if (leftLen + rightLen > max) max = leftLen + rightLen;
        return maximum(leftLen + 1, rightLen + 1);
    }
    
    private int maximum(int x, int y)
    {
        return x > y ? x : y;
    }
}
