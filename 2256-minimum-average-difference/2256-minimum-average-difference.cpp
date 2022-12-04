class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int sizeOfArray = nums.size();
        long long sumFromEnd = 0, sumFromFront = 0, ans = INT_MAX;
        for(auto it : nums) sumFromEnd += it;
        
        int res = 0;
        for(int i = 0;i<sizeOfArray;i++) {
            sumFromFront += nums[i];
            sumFromEnd -= nums[i];
            int first = sumFromFront / (i+1);
            int second = (i == sizeOfArray-1) ? 0 : sumFromEnd / (sizeOfArray - i - 1);
            
            long long diff = abs(first - second);
            if(diff < ans) {
                ans = diff;
                res = i;
            }
        }
        return res;
    }
};