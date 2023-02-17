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
    int findMax(vector<int> &nums, int start, int end)
    {
        int max = start;
        
        for(int i = start; i < end; i++)
            if (nums.at(i) > nums.at(max))
                max = i;
        
        return max;
    }
    
    TreeNode* buildRec(vector<int> &nums, int start, int end)
    {
        if (start >= end)
            return nullptr;
        
        int maxIndex = findMax(nums, start, end);
        
        TreeNode* root = new TreeNode(nums.at(maxIndex));
        root->left = buildRec(nums, start, maxIndex);
        root->right = buildRec(nums, maxIndex + 1, end);
        
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return buildRec(nums, 0, nums.size());
    }
};