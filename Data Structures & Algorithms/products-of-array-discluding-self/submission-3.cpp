class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> pre; 
        vector<int> post;
        vector<int> ans;
        
        pre.push_back(1);
        int precount = 1;
        for(int i = 0; i < size - 1; i++){
            pre.push_back(pre[precount-1]*nums[i]);
            precount++;
            
        }
        
        int postcount = 1;
        post.push_back(1);
        for(int j = size-1; j > 0; j--){
            post.push_back(post[postcount-1]*nums[j]);
            postcount++;
        }


        int temp = size - 1;
        for(int i = 0; i < size; i++){
            int check = post[temp-i] * pre[i];
            ans.push_back(check);
        }


        return ans;
    }
};
