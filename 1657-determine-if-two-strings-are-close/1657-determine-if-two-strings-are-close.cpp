class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> freq1(26, 0), freq2(26, 0), vis1(26, 0), vis2(26, 0);
        for(auto &it : word1) {
            freq1[it-'a']++;
            vis1[it-'a'] = 1;
        }
        
        for(auto &it : word2) {
            freq2[it-'a']++;
            vis2[it-'a'] = 1;
        }
        
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());
        // for(auto it : freq1) cout << it << " ";
        // cout << "\n";
        // for(auto it : freq2) cout << it << " ";
        // for(auto it : s2) cout << it << " ";
        return freq1 == freq2 && vis1 == vis2;
    }
};