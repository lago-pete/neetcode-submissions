class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> grouped;

        for(string &s : strs){
            string str1 = s;
            sort(str1.begin(),str1.end());
            grouped[str1].push_back(s);
        }
        
        vector<vector<string>> ans;

        for(auto&[key,value] : grouped){
            ans.push_back(value);
        }
        return ans;
    }
};
