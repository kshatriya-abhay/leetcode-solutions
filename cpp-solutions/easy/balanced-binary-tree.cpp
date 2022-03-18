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
int check(TreeNode* n){
    if(n == NULL) return 0;
    int l = check(n->left);
    if(l == -1) return -1;
    int r = check(n->right);
    if(r == -1) return -1;
    if(max(l,r) - min(l,r) > 1) return -1;
    return max(l,r) + 1;
}
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(check(root) == -1) return false;
        else return true;
    }
};