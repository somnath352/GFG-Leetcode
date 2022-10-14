class Solution {
private:
    int cntTotal(int num) {
        int cnt = 0;
        for(int i = 0;i<32;i++) {
            if(num & (1 << i)) cnt++;    
        }
        return cnt;
        
    } 
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1, 0);
        for(int i = 1;i<=n;i++) {
            ans[i] = cntTotal(i);
        }
        return ans;
    }
};