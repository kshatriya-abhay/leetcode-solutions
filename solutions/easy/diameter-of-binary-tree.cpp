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
pair<int,int> rec(TreeNode* root) {
    if(root == NULL) return make_pair(0,0);
    if((root->left == NULL)&&(root->right == NULL)) return make_pair(1,1);
    pair<int, int> ans, l = rec(root->left), r = rec(root->right);
    ans.second = max(l.second, r.second) + 1;
    ans.first = max(l.second + r.second + 1, max(l.first, r.first));
    return ans;
}
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int, int> ans = rec(root);
        if (max(ans.first, ans.second) == 0) {
            return 0;
        }
        else return max(ans.first, ans.second)-1;
    }
};