class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> check;
        vector<int> ans;

        for(int i = 0; i < int(nums.size()); i++){
            if(check.contains(target-nums[i])){
                ans.push_back(check[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            check[nums[i]] = i;
        }

        return ans;

    }
};
