class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>> x;
       for(string &check : strs){
        string key = check;
        sort(key.begin(), key.end());
        x[key].push_back(check);
       }

       vector<vector<string>> ans;
       for(auto &[key,value] : x){
         ans.push_back(value);
       }

        return ans;

    }

};
