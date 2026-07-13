class MinStack {
   private:
    vector<int> ans;
    vector<int> minStack;

   public:
    MinStack() {}

    void push(int val) {
        ans.push_back(val);
        if (minStack.empty() || val < minStack.back()) {
            minStack.push_back(val);
        } else {
            minStack.push_back(minStack.back());
        }
    }

    void pop() {
        ans.pop_back();
        minStack.pop_back();
    }

    int top() { return ans.back(); }

    int getMin() { return minStack.back(); }
};
