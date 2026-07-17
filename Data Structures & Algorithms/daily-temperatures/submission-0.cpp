class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size());
        stack<int> check;

        for(int i = 0; i < temperatures.size(); i++){
            while(!check.empty() && temperatures[i] > temperatures[check.top()] )
            {
                int x = check.top();
                int diff = i - x;
                ans[x] = diff;
                check.pop();
            }
            check.push(i);
        }
        while(!check.empty())
        {
            int y = check.top();
            ans[y] = 0;
            check.pop();
        }
        return ans;

    }
};
