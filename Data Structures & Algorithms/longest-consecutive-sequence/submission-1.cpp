class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        int max = 0;
        for (int i = 0; i < sorted.size(); i++) {
            int count = 0;
            count++;
            while (i + 1 < sorted.size() &&
                   (sorted[i] + 1 == sorted[i + 1] || sorted[i] == sorted[i + 1])) {
                if (sorted[i] == sorted[i + 1]) {
                    i++;
                } else {
                    count++;
                    i++;
                }
            }
            if (count > max) {
                max = count;
            }
        }
        return max;
    }
};
