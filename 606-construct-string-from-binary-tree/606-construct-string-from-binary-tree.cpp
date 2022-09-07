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
    
    string res = "";
 
    void preorder(TreeNode* root)
    {
        // base case
        
        if(root == NULL)
            return;
        
        // form string
        
        res += '(';
        
        res += to_string(root -> val);
        
        // if left subtree doesn't exist
        
        if(root -> left == NULL && root -> right)
        {
            res += "()";
        }
        
        // call for left subtree
        
        preorder(root -> left);
        
        // call for right subtree
        
        preorder(root -> right);
        
        res += ')';
    }
    
    string tree2str(TreeNode* root) {
        
        // call preorder
        
        preorder(root);
        
        // remove the first and last parenthesis from res
        
        return res.substr(1, res.size() - 2);
    }
};