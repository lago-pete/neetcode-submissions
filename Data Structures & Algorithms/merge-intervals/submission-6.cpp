class Solution {
   public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        vector<int> check;
        sort(intervals.begin(), intervals.end());
        
        int size = intervals.size();

        if (intervals.empty()) {
            return ans;
        }
        check = intervals[0];
        if (size == 1) {
            ans.push_back(check);
            return ans;
        }

        for (int i = 1; i < size; i++) {
            if (check[1] >= intervals[i][0]) {
                check[0] = min(check[0], intervals[i][0]);
                check[1] = max(check[1], intervals[i][1]);
            }else
            {
                ans.push_back(check);
                check = intervals[i];
            }
        }
        ans.push_back(check);

        return ans;
    }
};
