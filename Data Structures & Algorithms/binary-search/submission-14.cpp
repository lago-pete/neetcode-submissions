class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        if(nums.size() < 2 && nums[0] != target){
            return -1;
        }

        while(left <= right){
            int mid = left + ((right - left)/2);

            if(nums[mid] == target){
                return mid;
            }
            if(nums[left] == target){
                return left;
            }
            else if(nums[right] == target){
                return right;
            }
            
            if(nums[mid] > target){
                right = mid-1;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            
            
        }
        return -1;


    }
};
