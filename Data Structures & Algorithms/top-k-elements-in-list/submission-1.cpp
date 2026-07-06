class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<int> ans;
       unordered_map<int,int> grouped;
       int maxValue = 0;
       int maxKey;
       int currentValue;
       for(int i = 0; i < nums.size(); i++){
            grouped[nums[i]] += 1;
       }    

       for(int j = 0; j < k; j++){
         for(auto &[key,value] : grouped)
         {
            currentValue = value;
            if(currentValue > maxValue){
                maxValue=currentValue;
                maxKey = key;
            }
         }
         ans.push_back(maxKey);
         grouped.erase(maxKey);
         maxValue = 0;
         maxKey = 0;
       }

       return ans;
    }
};
