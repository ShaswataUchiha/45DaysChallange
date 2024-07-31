class Solution {
public:
    vector<string> result;
    
    // Approach1
    // bool isValid(string& ans){
    //     int count = 0;
    //     for(char &ch : ans){
    //         if(ch == '(')
    //             count++;
    //         else
    //             count--;  
    //         if(count < 0)
    //             return false;      
    //     }
    //     return count == 0;
    // }
    // void solve(string &ans, int n){
    //     //base case
    //     if(ans.length() == 2*n){
    //         if(isValid(ans)){
    //             result.push_back(ans);
    //         }
    //         return;
    //     }

    //     //recursive function
    //     // Opening bracket in and out
    //     ans.push_back('(');
    //     solve(ans, n);
    //     ans.pop_back();
    //     // Closing bracket in and out
    //     ans.push_back(')');
    //     solve(ans, n);
    //     ans.pop_back();
    // }

    // Approach2
    void solve(string &ans, int n, int open, int close){
        //base case
        if(ans.length() == 2*n){
            result.push_back(ans);
            return;
        }

        //recursive function
        // Opening bracket in and out
        if(open < n){
            ans.push_back('(');
            solve(ans, n, open+1, close);
            ans.pop_back();
        }
        // Closing bracket in and out
        if(close < open ){
            ans.push_back(')');
            solve(ans, n, open, close+1);
            ans.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        string ans = "";
        solve(ans, n, 0, 0);
        return result;
    }
};