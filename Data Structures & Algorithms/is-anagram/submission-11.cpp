class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>ans1;
        unordered_map<char,int>ans2;
        
        

        if(s.length() != t.length())
        {
            return false;
        }

        for(int x : s)
        {
            ans1[x]++;
        }
        for(int y : t){
            ans2[y]++;
        }
        return ans1 == ans2;



     
    }
};
