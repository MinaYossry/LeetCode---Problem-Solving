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
    int ToGreater(TreeNode* root, int maxSum)
    {
        
        if (!root)
            return maxSum;
        
        
        
        root->val += ToGreater(root->right, maxSum);
        ToGreater(root->left, root->val);
        
        TreeNode* travLeft = root;
        while(travLeft->left)
            travLeft = travLeft->left;
        
        return travLeft->val;
        
    }
    TreeNode* bstToGst(TreeNode* root) {
        ToGreater(root, 0);
        return root;
    }
};