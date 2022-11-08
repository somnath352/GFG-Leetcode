class Solution {
public:
    bool isPowerOfThree(int n) {
        int x = 1162261467;
        return (n > 0 && x % n == 0);
    }
};