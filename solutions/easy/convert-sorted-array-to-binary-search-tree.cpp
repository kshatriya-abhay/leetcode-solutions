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
TreeNode* solve(vector<int>& nums, int low, int high){
    int mid = (low+high)/2;
    TreeNode* temp = new TreeNode(nums[mid]);
    temp->left = (low > (mid-1)) ? NULL : solve(nums, low, mid-1);
    temp->right = ((mid+1) > high) ? NULL : solve(nums, mid+1, high);
    return temp;
}
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return nums.size() == 0 ? NULL : solve(nums, 0, nums.size()-1);
    }
};