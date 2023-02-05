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
    void addToVector(TreeNode* root, vector<int> &result, int currentLevel) {
        if (!root)
            return;

        if (currentLevel == result.size()) {
            result.push_back(root->val);
            
        }
        addToVector(root->right, result, currentLevel + 1);
        addToVector(root->left, result, currentLevel + 1);    
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;

        addToVector(root, result, 0);
        return result;
    }
};