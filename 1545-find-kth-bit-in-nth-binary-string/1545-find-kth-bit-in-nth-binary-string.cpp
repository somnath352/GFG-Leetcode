class Solution {
public:
    char findKthBit(int n, int k) {
        // i start from index 2
        if(n == 1) return '0';
        int len = (1<<n) - 1;
        if(k - 1 == len/2) return '1';
        if(k - 1 < len/2) return findKthBit(n-1, k);
        if(findKthBit(n-1, len - k + 1) == '0') return '1';
        return '0';
    }
};