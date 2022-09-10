class Solution {
private:
    bool isPrime(int n) {
        for(int i = 2;i*i<=n;i++) {
            if(n%i == 0) return false;
        }
        return true;
    }
public:
    int primePalindrome(int n) {
        if(n >= 8 && n <= 11) return 11;
        for(int i = 2;i<100000;i++) {
            string s = to_string(i), r(s.rbegin(), s.rend());
            int ans = stoi(s + r.substr(1));
            if(ans >= n && isPrime(ans)) return ans;
        }
        return -1;
    }
};