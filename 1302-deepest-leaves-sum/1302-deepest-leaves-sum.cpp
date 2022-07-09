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
    int maxDepth(TreeNode* root)
  { if(!root)
    return 0;
    return 1+max(maxDepth(root->left),maxDepth(root->right));
  }
  int f(int i,TreeNode* root,int depth)
  { 
    if(!root)
      return 0;
    if(i==depth-1)
      return root->val;
    return f(i+1,root->left,depth)+f(i+1,root->right,depth);
  }
    int deepestLeavesSum(TreeNode* root) {
        int depth=maxDepth(root);
        int sum=f(0,root,depth);
      return sum;
    }
};