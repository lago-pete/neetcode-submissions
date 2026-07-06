class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> check;
        vector<int> ans;
        int maxValue = 0;
        int maxKey = 0;
        
        for(int &x : nums){
          check[x] += 1;
        }

        for(int i = 0; i < k; i++){
          for(auto &[key,value] : check){
            if(value > maxValue){
              maxValue = value;
              maxKey = key;
            }
          }

          ans.push_back(maxKey);
          check.erase(maxKey);
          maxValue = 0;
        }

        return ans;

    }
};
