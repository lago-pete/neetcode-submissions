class Solution {
public:
    bool isPalindrome(string s) {
        
        
        string check;

        for(char c:s){
            if(isalnum(c))
            {
                check += tolower(c);
            }
        }
        int len = check.length();
        int point = len - 1;
        for(int i = 0; i < (len/2); i++){
            if(check[i] != check[point - i])
            {
                return false;
            }
        }
        return true;
    }
};
