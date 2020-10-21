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
    int util(TreeNode* r, int d){
        if(!r)
            return d-1;
        
        return max(util(r->left, d+1), util(r->right, d+1));
    }
    int maxDepth(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(!root)
            return 0;
        return util(root, 1);
    }
};
