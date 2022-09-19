class Solution {
private:
    int func(int n, int k) {
        if(n == 1) return 0;
        
        return (func(n-1, k) + k) % n;
    }
public:
    int findTheWinner(int n, int k) {
        return func(n, k) + 1;
    }
};