/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int postIndex;
    int findValue(int start, int end, int target, vector<int>& inorder)
    {
        if(start > end)
            return -1;
        for(int i = start; i <= end; i++)
        {
            if(inorder[i]==target)
            {
                postIndex--;
                return i;
            }
        }
        return -1;
    }
    TreeNode* buildSubTree(vector<int>& inorder, vector<int>& postorder, int start, int end)
    {
        int valueIndex = findValue(start, end, postorder[postIndex], inorder);
        if(valueIndex == -1)
        {
            return NULL;
        }
        else
        {
            int value = inorder[valueIndex];
            TreeNode* subroot = new TreeNode(value);
            subroot->right = buildSubTree(inorder, postorder, valueIndex+1, end);
            subroot->left = buildSubTree(inorder, postorder, start, valueIndex -1);
            return subroot;
        }
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        postIndex = postorder.size() - 1;
        TreeNode* root = buildSubTree(inorder, postorder, 0, postIndex);
        return root;
    }
};
