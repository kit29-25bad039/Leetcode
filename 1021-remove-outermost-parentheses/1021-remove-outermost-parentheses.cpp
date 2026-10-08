class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int l=0;
        for(auto&c:s){
            if(c&1?--l:l++){
                res+=c;
            }
        }
        return res;
    }
};