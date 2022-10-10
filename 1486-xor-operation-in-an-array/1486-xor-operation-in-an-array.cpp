class Solution {
public:
    int xorOperation(int n, int start) {
        int _xor = 0;
        while(n) {
            _xor ^= start;
            start += 2;
            n--;
        }
        return _xor;
    }
};