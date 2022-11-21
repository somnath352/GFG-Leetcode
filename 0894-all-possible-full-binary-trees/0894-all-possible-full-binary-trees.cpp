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
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> res;
        if(n == 1) {
            res.push_back(new TreeNode(0));
            return res;
        }
        
        n -= 1;
        for(int i = 1;i<n;i+=2) {
            vector<TreeNode*> left = allPossibleFBT(i);
            vector<TreeNode*> right = allPossibleFBT(n - i);
            
            for(TreeNode* nl : left) {
                for(TreeNode* nr : right) {
                    TreeNode *curr = new TreeNode(0);
                    curr->left = nl;
                    curr->right = nr;
                    res.push_back(curr);
                }
            }
        }
        return res;
    }
};