class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> grouped;

        for(int &x : nums){
            grouped[x] += 1;
            if(grouped[x] > 1)
            {
                return true;
            }
        }
        return false;
      
        
    }
};