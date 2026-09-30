class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> check;
        vector<vector<string>> ans; 

        for(string &str : strs){
            string temp = str;
            sort(temp.begin(), temp.end());
            check[temp].push_back(str);
        } 

        for(auto &[key,value] : check){
            ans.push_back(value);
        }
        return ans;
    }
};
