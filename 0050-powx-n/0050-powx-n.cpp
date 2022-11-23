class Solution {
public:
    double myPow(double x, int n) {
        double answer = 1.0;
        long long copyOfN = n; // 2
        if(copyOfN < 0) copyOfN = -1 * copyOfN;
        while(copyOfN) {
            if(copyOfN & 1) {
                answer *= x;  // 4
                copyOfN -= 1;  // 0
            }
            else {
                x = x*x;  // 4
                copyOfN >>= 1;  // 1
            }
        }
        if(n < 0) answer = (double)1.0 / (double)answer;
        return answer;
    }
};