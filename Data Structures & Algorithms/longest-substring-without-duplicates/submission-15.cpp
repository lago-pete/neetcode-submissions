class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 1;
        int current = 0;
        int max = 0;
        int size = s.size();
        unordered_set<char> check;


        if(s.size() == 1){
            return 1;
        }
        check.insert(s[l]);
        while(r < size){
            if(!check.count(s[r])){
                check.insert(s[r]);
                current = check.size();
                if (current > max){
                    max = current;
                }
            }
            else{
                while(l < r && check.count(s[r])){
                    check.erase(s[l]);
                    l++;
                }
                check.insert(s[r]);
                current = check.size();
                if (current > max){
                    max = current;
                }
            }
            r++;
        }
        return max;


    }
};
