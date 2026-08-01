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
    vector<int> postorderTraversal(TreeNode* root) {
        //using two stacks

        //left right root
        vector<int>ans;
        if(root==NULL)
        return ans;
        //one store reverse like in left right root
        stack<TreeNode*>s1;
       s1.push(root);
        while(!s1.empty()){
            TreeNode* node=s1.top();//phele element nikaalenge
            s1.pop();
            //same bs yeah line extra h push karenge to push into s2
         //   s2.push(node);
          ans.push_back(node->val);
            if(node->left)
            s1.push(node->left);
            if(node->right)
            s1.push(node->right);
          //   ans.push_back(root);

       // }
       // while(!s1.empty()){
            //ans.push_back(s1.top()->val);//ans me push karenge s2 k top value
         //  s1.pop();
        }
       //  ans.push_back(root);
        reverse(ans.begin(),ans.end());
        return ans;

    }
};
//ex: 1
   //2   3
   //stack[1] ans[]
   // stack[2,3]  ans[1]
   //stack [2]  ans[1,3]
   //stack ans[1,3,2]
   //ans=[2,3,1]->reverse
