class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0;
        int right = nums.size()-1;
        int size = nums.size();
        sort(nums.begin(),nums.end());

        return nums[0];

        
    }
};
