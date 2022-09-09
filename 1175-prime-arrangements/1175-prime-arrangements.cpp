class Solution {
private:
    int countNoOfPrimes(bool sieve[], int n) {
        for(int i = 2;i<=n;i++) sieve[i] = true;
        
        for(int i = 2;i*i<=n;i++) {
            if(sieve[i] == true) {
                for(int j = i*i;j<=n;j+=i) {
                    sieve[j] = false;
                }
            }
        }
        
        int countPrimes = 0;
        for(int i = 2;i<=n;i++) {
            if(sieve[i] == true) countPrimes++;
        }
        return countPrimes;
    }
private:
    long long fact(int n, int mod) {
        if(n == 0) return 1;
        
        return n*fact(n-1, mod)%mod;
    }
public:
    int numPrimeArrangements(int n) {
        bool sieve[n+1];
        int mod = 1000000007;
        
        int countOnlyPrimeNumber = countNoOfPrimes(sieve, n);  // 25
        int countOnlyNonPrimeNumber = n - countOnlyPrimeNumber;
        
        long long ans = fact(countOnlyPrimeNumber, mod) % mod * fact(countOnlyNonPrimeNumber, mod) % mod;
        // cout << countOnlyPrimeNumber;
        return ans;
        
    }
};