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
    TreeNode* mapping(TreeNode* root, map<TreeNode*, TreeNode*> &m, int target){
        
        TreeNode* res = NULL ; 
        m[root] = NULL;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            
            if(temp->val == target) res = temp;
            
            if(temp->left){
                m[temp->left] = temp;
                q.push(temp->left);
            }
            
            if(temp->right){
                m[temp->right] = temp;
                q.push(temp->right);
            }
            
        }
        return res ; 
    }

    int burn(TreeNode* startNode, map<TreeNode*, TreeNode*> parent){
        
        map<TreeNode*,bool> visited;
        visited[startNode] = 1;
        
        queue<TreeNode*> q;
        int time = 0;
        
        q.push(startNode);
        
        while(!q.empty()){
            
            int s = q.size();
            bool flag = 0;
            
            for(int i=0; i<s; i++){
                
                TreeNode* temp = q.front();
                q.pop();
                
                if(parent[temp] && !visited[parent[temp]]){
                    q.push(parent[temp]);
                    visited[parent[temp]] = 1;
                    flag = 1;
                }
                if(temp->left && !visited[temp->left]){
                    q.push(temp->left);
                    visited[temp->left] = 1;
                    flag = 1;
                }
                if(temp->right && !visited[temp->right]){
                    q.push(temp->right);
                    visited[temp->right] = 1;
                    flag = 1;
                }
            }
            if(flag) time++;
        }
        return time;
    }
    int amountOfTime(TreeNode* root, int start) {

        map<TreeNode*, TreeNode*> m;
        
        TreeNode* res = mapping(root, m, start);
        
        return burn(res, m);
    }
};