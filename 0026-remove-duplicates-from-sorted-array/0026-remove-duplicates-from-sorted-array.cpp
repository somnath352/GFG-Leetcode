class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int countDuplicate = 0, n = nums.size();
        for(int i = 1;i<n;i++) {
            if(nums[i] == nums[i-1]) countDuplicate++;
            else nums[i-countDuplicate] = nums[i];
        }
        return n - countDuplicate;
    }
};