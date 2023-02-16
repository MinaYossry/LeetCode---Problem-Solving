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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        result.push_back(root->val);
        
        if (!root->left && !root->right)
            return result;
        
        queue<TreeNode*> current;
        queue<TreeNode*> next;
        
        if (root->left)
            current.push(root->left);
        if (root->right)
            current.push(root->right);

        
        double sum = 0;
        int count = 0;
        double average = 0;
        
        while(!current.empty())
        {
            TreeNode* currentNode = current.front();
            current.pop();
            
            if(currentNode->left)
                next.push(currentNode->left);
            
            if(currentNode->right)
                next.push(currentNode->right);
            
            sum += currentNode->val;
            count++;
            
            if (current.empty())
            {
                average = sum / count;
                result.push_back(average);
                sum = 0;
                count = 0;
                current = move(next);
                next = queue<TreeNode*>();
            }
        }
        
        return result;
    }
};