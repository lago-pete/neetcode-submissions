class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.empty() || nums.size() == 1){
            return false;
        }
        unordered_set<int> check;

        for(int &num : nums){ // If num is in check then return true;// else insert into check.
            if(check.count(num)){
                return true;
            }
            check.insert(num);
        }
        return false;
    }
};