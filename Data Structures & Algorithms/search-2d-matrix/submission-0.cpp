class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int onl = 0;
        int onr = matrix.size() - 1;
        int n = 0;
        int iml = 0;
        int imr = matrix[0].size() - 1;
        int m = 0;

        while (onl <= onr) 
        {
            n = onl + ((onr - onl) / 2);

            if (matrix[n][0] <= target && matrix[n][imr] >= target) 
            {
                while (iml <= imr) {
                    m = iml + ((imr - iml) / 2);
                    if (matrix[n][m] == target) {
                        return true;
                    } else if (matrix[n][m] > target) {
                        imr = m - 1;
                    } else {
                        iml = m + 1;
                    }
                }
                return false;
            }
            else if (matrix[n][0] > target) 
            {
                onr = n - 1;
            }
            else 
            {
                onl = n + 1;
            }
            
            
        }
        return false;
    }
};