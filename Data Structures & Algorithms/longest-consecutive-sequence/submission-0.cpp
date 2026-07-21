class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(),sorted.end());
        int max = 0;
        for(int i = 0; i < sorted.size(); i++){
            set<int> check;
            check.insert(sorted[i]);
            while(i + 1 < sorted.size() && (sorted[i]+1 == sorted[i+1] || sorted[i] == sorted[i+1])){
                check.insert(sorted[i+1]);
                i++;
            }
            if(check.size() > max){
                max = check.size();
            }
        }
        return max;
    }
};
