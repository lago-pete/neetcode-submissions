class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> check;
        int diff;
        for(int i = 0; i < nums.size(); i++){
            diff = target - nums[i];
            if(check.contains(diff)){
                ans.push_back(check[diff]);
                ans.push_back(i);
                return ans;
            }
            check[nums[i]] = i;
        }
        
    }
};
