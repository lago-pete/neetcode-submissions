class Solution {
public:

    string encode(vector<string>& strs) {
        string input;
        string final;
        int sizeX; 

        for(string &x : strs){
          sizeX = x.size();
          input = to_string(sizeX) + "#" + x;
          final = final + input;
        }
        return final;

    }

    vector<string> decode(string s) {
      vector<string> finalVec;
      string leng;
      size_t pos;
      int lengI;
      string word;

      while(!s.empty()){
        pos = s.find("#");
        leng = s.substr(0,pos);
        lengI = stoi(leng);
        word = s.substr(pos+1,lengI);
        s.erase(s.begin(),s.begin()+(lengI+1+pos));
        finalVec.push_back(word);
      }
      return finalVec;
    }
};
