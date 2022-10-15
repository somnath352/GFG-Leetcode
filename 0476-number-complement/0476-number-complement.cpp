class Solution {
public:
    int findComplement(int num) {
        int res = 0, i = 0;
        while(num) {
            if((num&1) == 0) {
                res += 1<<i;
            }
            i++;
            num >>= 1;
        }
        return res;
    }
};