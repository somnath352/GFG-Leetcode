class Solution {
private:
    int power(long long x, long long y, int mod) {
        if(y == 0) return 1;
        long long ans = power(x, y >> 1, mod);
        ans = (ans * ans) % mod;
        return y%2 ? (ans*(x%mod))%mod : ans;
    }
public:
    int minNonZeroProduct(int p) {
        int mod = 1000000007;
        long long countTotalNumber = (1ll << p) - 1;
        return countTotalNumber % mod * power(countTotalNumber - 1, countTotalNumber/2, mod) % mod;
        // pow(14, 7)  2744 <> pow(14, 3) 14 <> pow(14, 1)  pow(14, 0)
    }
};