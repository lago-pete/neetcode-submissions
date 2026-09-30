class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        int l = 0;
        int r = size - 1;

        while(l < r){
            while(!isalnum(s[l]) && l < r){
                l++;
            }
            while(!isalnum(s[r]) && l < r){
                r--;
            }
            if(tolower(s[l]) != tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
