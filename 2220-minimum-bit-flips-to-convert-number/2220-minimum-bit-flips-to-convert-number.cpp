class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt = 0;
        int _xor = start ^ goal;
        // int cntMinBits = __builtin_popcount(_xor);
        for(int i = 0;i<32;i++) {
            if(_xor&(1<<i)) cnt++;
        }
        return cnt;
    }
};