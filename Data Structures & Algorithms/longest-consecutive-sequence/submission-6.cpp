class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int ans;
        int max = 0;
        int current;
        int prev_val;
        sort(nums.begin(), nums.end());
        for (int num : nums) {
            cout << num;
        }

        if(nums.size() == 1){
            return 1;
        }
    
        for (int i = 0; i < nums.size(); i++) {

            if(prev_val == nums[i]){
                continue;
            }
            if (prev_val == nums[i] - 1) {
                current++;
                prev_val = nums[i];
                if (current > max) {
                    max = current;
                }
            } else {
                current = 1;
                prev_val = nums[i];
                if (current > max) {
                    max = current;
                }
            }
        }
        
        ans = max;
        return ans;
    }
};
