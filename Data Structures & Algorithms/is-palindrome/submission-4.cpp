class Solution {
   public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        if(s.size() == 1 && isalnum(s[0])){
            return true;
        }

        while (left < right) {
            while (!isalnum(s[left]) && left < right) left++;
            while (!isalnum(s[right]) && right > left) right--;
            if ( tolower(s[left]) == tolower(s[right])) {
                left++;
                right--;
            } else {
                return false;
            }
        }
        return true;
    }
};
