class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int it : nums) {
            s.insert(it);
        }
        vector<int> ans;
        for(auto it : s) {
            ans.push_back(it);
        }
        nums = ans;
        // for(auto it : ans) cout << it << " ";
        return nums.size();
    }
};