#define ll long long
class Solution {
private:
    ll power(long long x, long long y) {
        if(x == 0) return 0;
        long long res = 1;
        while(y > 0) {
            if(y&1) res = (res*x) % mod;
            
            y >>= 1;
            x = (x*x) % mod;
        }
        return res;
    }
public:
    int mod = 1e9 + 7;
    int countGoodNumbers(long long n) {
        ll countNoOf4s = n/2;
        ll countNoOf5s = n - countNoOf4s;
        ll ans = ((power(4ll, countNoOf4s)%mod * power(5ll, countNoOf5s)%mod)%mod);
        return (int)ans;
    }
};