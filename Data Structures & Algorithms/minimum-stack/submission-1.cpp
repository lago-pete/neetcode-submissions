class MinStack {
   private:
    vector<int> ans;
    vector<int> minS;

   public:
    MinStack() {

    }

    void push(int val) {
        ans.push_back(val);
        if(minS.empty() || val < minS.back())
        {
            minS.push_back(val);
        }
        else{
            minS.push_back(minS.back());
        }
        
    }

    void pop() {
        ans.pop_back();
        minS.pop_back();
    }

    int top() {
        return ans.back();
    }

    int getMin() {
        return minS.back();
    }
};
