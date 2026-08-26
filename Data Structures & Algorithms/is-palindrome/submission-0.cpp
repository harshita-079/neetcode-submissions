class Solution {
public:
    bool isPalindrome(string s) {
        string copy="";
        for(auto ch:s){
            if(isalnum(ch)){
                ch=tolower(ch);
                copy=copy+ch;
            }
        }
        string r=copy;
        reverse(r.begin(),r.end());
        if(r==copy)return true;
        return false;
    }
};
