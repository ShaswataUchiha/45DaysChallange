class Solution {
public:
    void findAnsOfBst(TreeNode* root, int low, int high, int &sum){
        if(root == NULL) return;

        if(root->val<high && root->val>low && root->val != high && root->val != low)
            sum += root->val;

        if(root->left) findAnsOfBst(root->left, low, high, sum); 
        if(root->right) findAnsOfBst(root->right, low, high, sum); 
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = low + high;
        findAnsOfBst(root, low, high, sum);
        return sum;
    }
};