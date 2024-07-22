class Solution {
public:

    // Using Stack
    // string backSpacing(string &s){
    //     stack<char> st;
    //     for(char ch : s){
    //         if(!st.empty() && ch == '#')
    //             st.pop();
    //         else if(ch != '#')
    //             st.push(ch);
    //     }
    //     string str;
    //     while(!st.empty()){
    //         char temp = st.top();
    //         str += temp;
    //         st.pop();
    //     }
    //     reverse(str.begin(), str.end());
    //     return str;
    // 
    string isEqual(string st){
        string temp = "";
        for(auto ch : st){
            if(ch != '#') temp += ch;
            else{
                if(!temp.empty()) temp.pop_back();
            }
        }
        return temp;
    }
    bool backspaceCompare(string s, string t) {
        // string option1 = backSpacing(s);
        // string option2 = backSpacing(t);
        // return (option1 == option2) ? true : false;
        return isEqual(s) == isEqual(t);
    }
};