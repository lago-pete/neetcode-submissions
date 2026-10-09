class Solution {
   public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int i = 0;
        vector<int> ansInterval = newInterval;
        int size = intervals.size();

        if (newInterval.empty()) {
            return intervals;
        }
        // 1. Insert every interval smaller then the new one.
        while (i < size && intervals[i][1] < ansInterval[0]) {
            ans.push_back(intervals[i]);
            i++;
        }
        //2. Combine intervals until ansInterval smaller then intervals[i][0]
        while (i < size && ansInterval[1] >= intervals[i][0]) {
            ansInterval[0] = min(ansInterval[0], intervals[i][0]);
            ansInterval[1] = max(ansInterval[1], intervals[i][1]);
            i++;
        }
        ans.push_back(ansInterval);
        
        //3, Insert the rest of the intervals into ans. 
        while(i < size){
            ans.push_back(intervals[i]);
            i++;
        }

        return ans;
    }
};
