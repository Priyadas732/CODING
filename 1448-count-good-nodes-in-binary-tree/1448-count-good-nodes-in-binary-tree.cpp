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
    int check(TreeNode* node, int max_val){
        if(node==nullptr) return 0;
        
        int count=0;
        if(node->val >= max_val){
            count++;
            max_val = node->val;
        }
        count += check(node->left, max_val);
        count += check(node->right, max_val);

        return count;
    }
    int goodNodes(TreeNode* root) {
        if(root==nullptr)return 0;
        if(root->left==nullptr && root->right==nullptr)return 1;
        int goodNodes = 1;
        goodNodes += check(root->left, root->val);
        goodNodes += check(root->right, root->val);

        return goodNodes;
    }
};