class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        set<char> check;
        int ans = 0;
        
        while(right < s.length()){
            
            while(check.contains(s[right])){
                check.erase(s[left]);
                left++;
            }
            check.insert(s[right]);
            if(check.size() > ans){
                ans = check.size();
            }
            right++;
        }
        return ans;
    }
};
