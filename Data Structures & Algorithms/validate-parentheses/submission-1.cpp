class Solution {
public:
    bool isValid(string s) {
        stack<char> check;
        unordered_map<char,char> test = {{')','('}, {'}','{'}, {']','['}};
        
        for(char c : s){
            if(c == '(' || c == '{' || c == '['){
                check.push(c);
            }
            if(c == ')' || c == '}' || c == ']'){
                if(check.empty() || test[c] != check.top())
                {
                    return false;
                }
                check.pop();
            }
            
        }
        return check.empty();
    }
};
