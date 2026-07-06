class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      vector<vector<string>> ans;
      unordered_map<string,vector<string>> group;

      for(string &x : strs){
        string check = x;
        sort(check.begin(), check.end());
        group[check].push_back(x);
      }

      for(auto &[key,value] : group){
        ans.push_back(value);
      }

      return ans;


    }

};
