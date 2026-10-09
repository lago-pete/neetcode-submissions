class Solution {
   public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        vector<int> check = intervals[0];
        int i = 1;
        int size = intervals.size();
        if (intervals.empty()) {
            return ans;
        }
        if(size == 1){
            ans.push_back(intervals[0]);
            return ans;
        }

        while (i < size) {
            while (i < size && check[1] < intervals[i][0]) {
                ans.push_back(check);
                check = intervals[i];
                i++;
            }
            while (i < size && check[1] >= intervals[i][0]) {
                check[0] = min(check[0], intervals[i][0]);
                check[1] = max(check[1], intervals[i][1]);
                i++;
            }
            ans.push_back(check);
            if (i < size) {
                check = intervals[i];
            }
            if(i == size -1){
                ans.push_back(check);
            }
            i++;
        }
         return ans;
    }
};
