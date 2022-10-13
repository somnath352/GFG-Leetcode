class Solution {
public:
    int minBitFlips(int start, int goal) {
        int _xor = start ^ goal;
        int cntMinBits = __builtin_popcount(_xor);
        return cntMinBits;
    }
};