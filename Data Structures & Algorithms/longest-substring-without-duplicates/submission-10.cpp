class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int max = 0;
        set<char> check;

        while (right < s.length()) {
            cout << 1;
            while (check.contains(s[right])) {
                check.erase(s[left]);
                left++;
            }
            check.insert(s[right]);
            right++;
            if (max < check.size()) {
                max = check.size();
            }
        }
        return max;
    }
};
