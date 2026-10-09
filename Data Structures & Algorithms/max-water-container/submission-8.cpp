class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right = heights.size()-1;
        int current = 0;
        int max = 0;
        
        if(heights.empty())
            return 0;

        while (left < right){
            current = (right - left) * (min(heights[left],heights[right]));
            cout << current;
            if(current > max){
                max = current;
            }
            if(heights[left] >= heights[right]){
                right--;
            }else{
                left++;
            }
        }

        return max;


    }
};
