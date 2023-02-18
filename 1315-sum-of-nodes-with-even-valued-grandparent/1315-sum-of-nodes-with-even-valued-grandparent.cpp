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
    int sum(TreeNode* root, bool prevEven, bool grandParentEven)
    {
        if (!root)
            return 0;
        
        if (grandParentEven)
            return root->val + sum(root->left, root->val % 2 == 0, prevEven) + sum(root->right, root->val % 2 == 0, prevEven);
        
        return sum(root->left, root->val % 2 == 0, prevEven) + sum(root->right, root->val % 2 == 0, prevEven);
    }
    int sumEvenGrandparent(TreeNode* root) {
        return sum(root, false, false);
    }
};