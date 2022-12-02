class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> freq1(26, 0), freq2(26, 0);
        set<char> s1, s2;
        for(auto &it : word1) {
            freq1[it-'a']++;
            s1.insert(it);
        }
        
        for(auto &it : word2) {
            freq2[it-'a']++;
            s2.insert(it);
        }
        
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());
        // for(auto it : freq1) cout << it << " ";
        // cout << "\n";
        // for(auto it : freq2) cout << it << " ";
        // for(auto it : s2) cout << it << " ";
        return freq1 == freq2 && s1 == s2;
    }
};