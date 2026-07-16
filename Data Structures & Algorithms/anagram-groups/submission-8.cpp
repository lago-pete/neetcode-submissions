class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ans;
        vector<vector<string>> final;
        
        for(string &s: strs){
            string check = s;
            sort(check.begin(),check.end());
            ans[check].push_back(s);
        }

        for(auto [key,value] : ans){
            final.push_back(value);
        }

        return final;
        
    }
};
