class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        vector<vector<int>> counter(26, vector<int>(26, 0));
        int longestPalindrome = 0;
        
        for(string ele : words) {
            int first = ele[0] - 'a', second = ele[1] - 'a';
            if(counter[second][first]) {
                longestPalindrome += 4;
                counter[second][first]--;
            }
            else counter[first][second]++;
        }
        for(int i = 0;i<26;i++) {
            if(counter[i][i]) {
                longestPalindrome += 2;
                break;
            }
        }
        return longestPalindrome;
    }
};