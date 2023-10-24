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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> ans;
        if(root==NULL) return ans;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            int m=INT_MIN;
            while(s>0){
                TreeNode* a=q.front();
                q.pop();
                m=max(a->val,m);
                if(a->left!=NULL)q.push(a->left);
                if(a->right!=NULL) q.push(a->right);
                s--;
            }
            ans.push_back(m);
        }
        return ans;
    }
};