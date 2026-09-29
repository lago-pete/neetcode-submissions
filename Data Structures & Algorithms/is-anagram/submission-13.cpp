class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int size = s.size();


        for(int i = 0; i < size; i++){
            if(s[i] != t[i]){
                return false;
            }
        }

        return true;
    }
};
