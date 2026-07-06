class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> ins;
       vector<vector<string>> ans;
       for(string &check1 : strs){
        string key = check1;
        sort(key.begin(), key.end());
        ins[key].push_back(check1);
       }

       for(auto &[key,value] : ins){
        ans.push_back(ins[key]);
       }
       return ans;
    }
};
