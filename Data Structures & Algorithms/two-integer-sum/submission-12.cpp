class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> check;

        for(int i = 0; i < nums.size(); i++){
            if(check.count(target-nums[i]) && check[target-nums[i]] != i){
                ans.push_back(check[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            check.insert({nums[i],i});
        }
        return ans;
    }
};
