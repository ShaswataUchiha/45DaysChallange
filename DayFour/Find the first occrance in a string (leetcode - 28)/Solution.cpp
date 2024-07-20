class Solution {
public:
    int strStr(string haystack, string needle) {

        //Using Two pointer
        // int h = haystack.length();
        // int n = needle.length();

        // for(int i=0; i<=h-n; i++){
        //     for(int j=0; j<n; j++){
        //         if(haystack[j+i] != needle[j])
        //             break;

        //         if(j == n-1)
        //             return i;  
        //     }
        // }
        // return -1;

        //Using subStr
        if(needle.length() > haystack.length()) 
            return -1;
        for(int i=0; i<=haystack.length() - needle.length(); i++){
            if(haystack.substr(i, needle.length()) == needle)
                return i;
        }
        return -1;
    }
};