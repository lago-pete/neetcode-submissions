class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> check;
        int max = 0;

        for(int & num: nums){
            check[num]++;
        }
        for(int i = 0; i < k; i++){
            int current;
            for(auto &[key,value] : check){
                if(value > max){
                    max = value;
                    current = key;
                }
            }
            max = 0;
            check.erase(current);
            ans.push_back(current);
        }
        
        return ans;
    }
};
