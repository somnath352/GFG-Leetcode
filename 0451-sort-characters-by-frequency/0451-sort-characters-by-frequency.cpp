class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mpp;
        for(char &c : s) mpp[c]++;
        
        priority_queue<pair<int, char>> pq;;
        for(auto &it : mpp) {
            pq.push({it.second, it.first});
        }
        
        string ans = "";
        while(!pq.empty()) {
            auto occur = pq.top().first;
            while(occur--) {
                ans += pq.top().second;
            }
            pq.pop();
        }
        
        return ans;
    }
};