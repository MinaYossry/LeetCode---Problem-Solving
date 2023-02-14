/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        } else {
            int leftDepth = maxDepth(root->left);
            int rightDepth = maxDepth(root->right);
            return (leftDepth > rightDepth ? leftDepth : rightDepth ) + 1;
        }
    }
    
    int sum(TreeNode* node, int level, int maxLevel)
    {
        if (!node)
            return 0;
        
        if (level == maxLevel)
            return node->val;
           
        return sum(node->left, level + 1, maxLevel) + sum(node->right, level + 1, maxLevel);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        
        int depth = maxDepth(root);
        
        return sum(root, 1, depth);
    }

};