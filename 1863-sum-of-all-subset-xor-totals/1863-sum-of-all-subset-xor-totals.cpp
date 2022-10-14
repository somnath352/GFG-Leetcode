class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int num = 0;num<(1<<n);num++) {
            int _xor = 0;
            for(int bit = 0;bit<n;bit++) {
                if(num & (1 << bit)) _xor ^= nums[bit]; 
            }
            sum += _xor;
        }
        return sum;
    }
};