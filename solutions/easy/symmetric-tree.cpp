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
bool isSym(TreeNode* l, TreeNode* r){
    if((l == NULL) && (r == NULL)) return true;
    else if((l == NULL)||(r == NULL)) return false;
    return (l->val == r->val) && isSym(l->left, r->right) && isSym(l->right, r->left);
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        else return isSym(root->left, root->right);
    }
};