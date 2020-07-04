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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        queue<TreeNode*> q1;
        q1.push(root);
        while(! q1.empty()){
            TreeNode* level_last = q1.back();
            vector<int> curr;
            while(q1.front() != level_last){
                curr.push_back(q1.front()->val);
                if(q1.front()->left != NULL) q1.push(q1.front()->left);
                if(q1.front()->right != NULL) q1.push(q1.front()->right);
                q1.pop();
            }
            curr.push_back(q1.front()->val);
            if(q1.front()->left != NULL) q1.push(q1.front()->left);
            if(q1.front()->right != NULL) q1.push(q1.front()->right);
            q1.pop();
            ans.push_back(curr);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};