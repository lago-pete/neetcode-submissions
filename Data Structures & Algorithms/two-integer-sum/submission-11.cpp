class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> check;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            if(check.count(target - nums[i])){
                ans.push_back(check[target-nums[i]]);
                ans.push_back(i);
            }
            check.insert({nums[i],i});
        }
        return ans;
    }
};
