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
    vector<TreeNode*> util(int start, int end){
        vector<TreeNode*> t;
        if(start > end){
            t.push_back(NULL);
            return t;
        }
        for(int i=start; i<=end; i++){
            vector<TreeNode*> l = util(start, i-1);
            vector<TreeNode*> r = util(i+1, end);
            
            for(int j=0; j<l.size(); j++){
                TreeNode* lnode = l[j];
                for(int k=0; k<r.size(); k++){
                    TreeNode* rnode = r[k];
                    TreeNode *temp = new TreeNode(i);
                    temp->left = lnode;
                    temp->right = rnode;
                    t.push_back(temp);
                }
            }
        }
        return t;
    }
    vector<TreeNode*> generateTrees(int n) {
        assert(n>=0);
        if(n==0)
            return {};
        return util(1, n);
    }
};
