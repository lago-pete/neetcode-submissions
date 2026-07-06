class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
       for(int i = 0; i < nums.size(); i++){
            int check = nums[i];
            for(int j = i + 1; j < nums.size(); j++){
                int check2 = nums[j];
                if(check == check2)
                {
                    cout << "True" ;
                    return true;
                }
            }
       }
       cout << "False" ; 
        
       return false; 
        
    }
};