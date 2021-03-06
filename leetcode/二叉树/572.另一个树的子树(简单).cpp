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
     bool isSame(TreeNode* s, TreeNode* t)
    {
        return (s==t)||((s!=NULL&&t!=NULL)&&(s->val==t->val&&isSame(s->left,t->left)&&isSame(s->right,t->right)));
    }
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(s==NULL)
            return false;
        else if(s->val==t->val&&isSame(s,t))
            return true;
        return isSubtree(s->left,t)||isSubtree(s->right,t);
    }
};