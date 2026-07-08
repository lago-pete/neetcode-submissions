class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        
        
        int len = nums.size();
        sort(nums.begin(), nums.end());
        //[0,0,0,0]
        for (int i = 0; i < len - 2; i++) {
            
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            
            int k = len - 1;
            int j = i + 1;
            
            while (j < k) {
                
                while ((nums[i] + nums[j] + nums[k] < 0) && j < k) {
                    j++;
                }
                while ((nums[i] + nums[j] + nums[k] > 0) && j < k) {
                    k--;
                }
                
                if (nums[i] + nums[j] + nums[k] == 0 && j != k) {
                    vector<int> check;
                    check.push_back(nums[i]);
                    check.push_back(nums[j]);
                    check.push_back(nums[k]);
                    ans.push_back(check);     
                    while(nums[j] == nums[j+1] && (j+1 < k))
                    {
                        j++;
                    }
                    while(nums[k] == nums[k-1] && (k-1>j))
                    {
                        k--;
                    }
                }
                
                j++;
            }
        }
        return ans;
    }
};
