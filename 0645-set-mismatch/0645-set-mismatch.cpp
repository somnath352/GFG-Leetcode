class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int _xor = 0, xor0 = 0, xor1 = 0;
        for(int it : nums) {
            _xor ^= it;
        }
        for(int i = 1;i<=nums.size();i++) {
            _xor ^= i;
        }
        
        int rightMostBit = _xor & ~(_xor - 1);
        for(int it : nums) {
            if(it & rightMostBit) xor1 ^= it;
            else xor0 ^= it;
        }
        for(int i = 1;i<=nums.size();i++) {
            if(i & rightMostBit) xor1 ^= i;
            else xor0 ^= i;
        }
        
        for(int i = 0;i<nums.size();i++) {
            if(nums[i] == xor0) return {xor0, xor1};
        }
        return {xor1, xor0};
    }
};

// 1 2 4 4 5 6

// 0011
// 0100

// 0111
// 1001

// 0001  right

// xor1  1
// xor0  0010
      // 0100
  //     0110