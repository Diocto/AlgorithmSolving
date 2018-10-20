/**
 *  * Definition for a binary tree node.
 *   * struct TreeNode {
 *    *     int val;
 *     *     TreeNode *left;
 *      *     TreeNode *right;
 *       *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *        * };
 *         */
class Solution {
  public:
    int maxDiameter = 1;
    int updateMaxDiameter(TreeNode* root)
    {
            if(root == NULL)
                return 0;
            int left = updateMaxDiameter(root->left);
            int right = updateMaxDiameter(root->right);
            maxDiameter = max(maxDiameter, left+right+1);
            return max(left,right) + 1;
        }
    int diameterOfBinaryTree(TreeNode* root) {
            updateMaxDiameter(root);
            return maxDiameter - 1;
        } 
};
