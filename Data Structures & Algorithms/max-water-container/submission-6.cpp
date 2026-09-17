class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int current = 0;
        int max = 0;
        int use = 0;
        
        while(l<r){
            if(heights[l] > heights[r]){
                use = heights[r];
            }
            else{
                use = heights[l];
            }
            current = use*(r-l);
            
            if(current > max){
                max = current;
            }

            if(heights[l] > heights[r]){
                r--;
            }
            else{
                l++;
            }

        }
        return max;

    }
};
