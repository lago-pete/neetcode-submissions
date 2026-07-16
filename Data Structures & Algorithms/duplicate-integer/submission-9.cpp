class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(int x : nums){
            ans[x] ++;
            if(ans[x]>1)
            {
                return true;
            }
        }
        return false;
    }
};