class Solution {
public:
    int lastRemaining(int n) {
        if(n == 1) return 1;
        int ans = 2 * (n/2 - lastRemaining(n/2)+1);
        return ans;
    }
};

// 1 2 3 4 5 6 7 8 9 10

// 2 4 6 8 10
// 4 8
// 8