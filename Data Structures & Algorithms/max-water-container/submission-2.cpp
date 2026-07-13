class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxSize = 0; 
        
        int left = 0;
        int right = heights.size() - 1;

        while(left < right){
            if(((right-left) * min(heights[left], heights[right])) > maxSize){
                maxSize = (right - left) * min(heights[left], heights[right]);
            }
            
            if(heights[left] == heights[right]){
                heights[left]--;
            }
            if(heights[left] > heights[right])
            {
                right--;
            }
            else{
                left++;
            }
        }
        return maxSize;



    }
};
