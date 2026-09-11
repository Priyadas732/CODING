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
    pair<int,int>getSumCount(TreeNode* root){
        if(!root)return {0,0};

        auto left = getSumCount(root->left);
        auto right = getSumCount(root->right);

        int sum = root->val + left.first + right.first;
        int count = 1 + left.second + right.second;

        return {sum, count};
    }
    void solve(TreeNode* root, int &ans){
        if(!root) return;

        auto [sum, count] = getSumCount(root);

        if(root->val == sum/count) ans++;

        solve(root->left, ans);
        solve(root->right, ans);
    }
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        solve(root, ans);
        return ans;
    }
};