class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int ans;
        int prev;
        int current;
        int max = 0;
        int count = 0;
        int size = nums.size();
        unordered_set<int> check;

        sort(nums.begin(), nums.end());

        

        for (int i = 0; i < size; i++) {
            if (check.empty()) {
                check.insert(nums[i]);
                count++;
                if (count > max) {
                    max = count;
                }
                continue;
            }
            if (check.contains(nums[i])) {
                continue;
            }
            if (check.contains(nums[i] - 1)) {
                check.insert(nums[i]);
                count++;
                if (count > max) {
                    max = count;
                }
                continue;
            }

            if (count > max) {
                max = count;
            }
            check.clear();
            check.insert(nums[i]);
            count = 1;
            
        }
        return max;
    }
};
