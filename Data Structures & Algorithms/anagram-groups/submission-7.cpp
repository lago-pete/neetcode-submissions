class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string, vector<string>> grouped; 
      vector<vector<string>> ans;

      for(string &x : strs){
        string key = x;
        sort(key.begin(),key.end());
        grouped[key].push_back(x);
      }
      for(auto &[a,b] : grouped){
        ans.push_back(b);
      }
        return ans;
  }

};
