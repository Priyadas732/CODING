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
    int maxDia = 0;
    int findH(TreeNode* root){
        if(root==nullptr)return 0;

        int lh = findH(root->left);
        int rh = findH(root->right);
        maxDia = max(maxDia, lh+rh);

        return 1+max(lh, rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        findH(root);
        return maxDia;
    }
};