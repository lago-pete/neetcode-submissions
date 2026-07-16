class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack1;

        for (string s : tokens) {
            if (s == "+") {
                int num1 = stack1.top();
                stack1.pop();
                int num2 = stack1.top();
                stack1.pop();
                
                num1 += num2;
                stack1.push(num1);

            } else if (s == "-") {
                int num1 = stack1.top();
                stack1.pop();
                int num2 = stack1.top();
                stack1.pop();

                num1 = num2 - num1;
                stack1.push(num1);

            } else if (s == "*") {
               int num1 = stack1.top();
                stack1.pop();
                int num2 = stack1.top();
                stack1.pop();
                num1 = num1 * num2;
                stack1.push(num1);

            } else if (s == "/") {
                int num1 = stack1.top();
                stack1.pop();
                int num2 = stack1.top();
                stack1.pop();

                num1 = num2 / num1;
                stack1.push(num1);
            }
            else{
                stack1.push(stoi(s));
            }
        }
        return stack1.top();
    }
    
};
