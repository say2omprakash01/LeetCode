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

    void firstLeaf(TreeNode* root1,vector<int> &v1){
        if(root1==0)return;
        if(root1->left==0 && root1->right==0)v1.push_back(root1->val);
        firstLeaf(root1->left,v1);
        firstLeaf(root1->right,v1);
    }
    void secondLeaf(TreeNode* root1,vector<int> &v1){
        if(root1==0)return;
        if(root1->left==0 && root1->right==0)v1.push_back(root1->val);
        secondLeaf(root1->left,v1);
        secondLeaf(root1->right,v1);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1,v2;
        firstLeaf(root1,v1);
        secondLeaf(root2,v2);
        return v1==v2;
    }
};