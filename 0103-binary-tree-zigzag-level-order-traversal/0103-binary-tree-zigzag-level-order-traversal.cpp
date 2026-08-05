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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

// bfs kyukii level by level jaa rhe h
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
       // int size=q.size();
        //TreeNode* root=root.pop();
        bool lefttoRight=true;
       while(!q.empty()){
        int size=q.size();
        vector<int>level;
        for(int i=0;i<size;i++){
        TreeNode* curr = q.front();
        q.pop();
        level.push_back(curr->val);

        if(curr->left)
       q.push(curr->left);
        if(curr->right)
        q.push(curr->right);
       
       //  if(curr->left)
       // q.push(curr->left);
        }
        

       if( lefttoRight == false){
       reverse(level.begin(),level.end());
       }
       lefttoRight = !lefttoRight;
        ans.push_back(level);
       }
      // q.push_front();
       return ans;
    }
};
//mtlb zig zag me 
//level 0:left to right
//leve 1:right to left
//level 2:left to right
//level 3:right to left