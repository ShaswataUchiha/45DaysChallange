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
    // TreeNode* prev = NULL;
    // int mini = INT_MAX;

    // void solve(TreeNode* root){
    //     if(root == NULL){
    //         return;
    //     }
    //     solve(root->left);
    //     if(prev != NULL){
    //         mini =  min(mini, abs(prev->val - root->val));
    //     }
    //     prev = root;
    //     solve(root->right);
    // }

    void elemntIntoArray(TreeNode* root, vector<int> &v){
        if(root == NULL) return;

        elemntIntoArray(root->left,v);
        v.push_back(root->val);
        elemntIntoArray(root->right,v);
    }


    int getMinimumDifference(TreeNode* root) {
        // solve(root);

        if(root == NULL){
            return 0;
        }

        vector<int> v;
        elemntIntoArray(root, v);
        sort(v.begin(),v.end());
        int mini=abs(v[0]-v[1]);
        for(int i=2;i<v.size();i++)
        {
            mini=min(mini,abs(v[i]-v[i-1]));
        }
        return mini;
    }
};