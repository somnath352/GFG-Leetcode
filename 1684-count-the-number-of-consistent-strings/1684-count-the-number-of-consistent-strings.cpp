class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int alphabet = 0, cnt = 0;
        for(auto &c : allowed) {
            alphabet |= 1 << (c - 'a');
        }
        
        for(string word : words) {
            for(char c : word) {
                if((alphabet & (1 << (c - 'a'))) == 0) {
                    cnt--;
                    break;
                }
            }
            cnt++;
        }
        return cnt;
    }
};