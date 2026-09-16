class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre;
        vector<int> post;
        vector<int> ans;
        int pref = 1;
        int postf = 1;
        pre.push_back(1);
        post.push_back(1);

        for(int i = 1; i < nums.size(); i++){
            int j = nums.size() - 1 - i;
            pref = pref * nums[i-1];
            pre.push_back(pref);
            postf = postf * nums[j + 1];
            post.push_back(postf);
        }
        reverse(post.begin(),post.end());
        for(int i = 0; i < nums.size(); i++){
            pre[i] = pre[i] * post[i];
        }
        return pre;
    }
};
