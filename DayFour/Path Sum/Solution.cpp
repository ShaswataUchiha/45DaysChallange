class Solution {
public:

    bool solve(TreeNode* root, int targetSum, int sum){
        if(root == NULL) return false;
        sum += root->val;
        if(root->left == NULL && root->right == NULL){
            if(sum == targetSum)
                return true;
            else
                return false;    
        }

        bool leftSum = solve(root->left, targetSum, sum);
        bool rightSum = solve(root->right, targetSum, sum);

        return leftSum || rightSum;
                
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        bool ans = solve(root, targetSum, sum);
        return ans;
    }
};