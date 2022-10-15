class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        int freq[501] = {0};
        for(auto &it : nums) freq[it]++;
        
        return all_of(begin(freq), end(freq), [](int i){return i%2 == 0;});
    }
};