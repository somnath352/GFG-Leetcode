class Solution {
private:
    int express(int x, int y, char c) {
        if(c == '+') return x+y;
        if(c == '*') return x*y;
        if(c == '-') return x-y;
        return 0;
    }
public:
    vector<int> diffWaysToCompute(string expression) {
        int sizeOfString = expression.size();
        vector<int> answer;
        bool isNumber = true;
        for(int i = 0;i<sizeOfString;i++) {
            if(!isdigit(expression[i])) {
                isNumber = false;
                
                vector<int> left = diffWaysToCompute(expression.substr(0, i));
                vector<int> right = diffWaysToCompute(expression.substr(i+1));
                
                
                for(int x : left) {
                    for(int y : right) {
                        int val = express(x, y, expression[i]);
                        answer.push_back(val);
                    }
                }
            }
        }
        
        if(isNumber) answer.push_back(stoi(expression));
        return answer;
    }
};