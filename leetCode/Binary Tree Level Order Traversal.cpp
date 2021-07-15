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
    vector<vector<int>> res;
    void preorderTraversal(TreeNode* root, int level){
        if(root==NULL){
            return;
        }
        if(level==res.size()){
            res.push_back({});
        }
        res[level].push_back(root->val);
        preorderTraversal(root->left, level+1);
        preorderTraversal(root->right, level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        preorderTraversal(root,0);
        return res;
    }
};