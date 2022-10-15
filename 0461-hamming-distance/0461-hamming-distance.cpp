class Solution {
public:
    int hammingDistance(int x, int y) {
        int _xor = x^y;
        int cnt = 0;
        while(_xor) {
            _xor &= _xor-1;
            cnt++;
        }
        return cnt;
    }
};