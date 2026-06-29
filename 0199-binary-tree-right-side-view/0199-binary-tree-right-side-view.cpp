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
    void preorder(TreeNode* node, int level, vector<int>&res){
        if(node==nullptr)return;

        if(res.size()<level) res.push_back(node->val);
        
        preorder(node->right, level+1, res);
        preorder(node->left, level+1, res);

    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        preorder(root,1,res);
        return res;
    }
};