class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int left = 0;
        int right = (numbers.size()-1);
        int check = 0;

        check = target - numbers[right];

        while(left < right){
            while(numbers[left] < check){left++;}
            if(numbers[left] == check)
            {
                ans.push_back(left + 1);
                ans.push_back(right + 1);
                return ans;
            }
            right--;
            check = target - numbers[right];
        }
        
    }
};
