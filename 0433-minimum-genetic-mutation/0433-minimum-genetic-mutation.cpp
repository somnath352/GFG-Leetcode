class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_set<string> s(bank.begin(), bank.end());
        
        if(!s.count(end)) return -1;
        
        queue<string> q;
        q.push(start);
        
        int cnt = 0;
        while(!q.empty()) {
            int n = q.size();
            while(n--) {
                string str = q.front();
                q.pop();
                
                if(str == end) return cnt;
                s.erase(str);
                
                for(int i = 0;i<8;i++) {
                    string t = str;
                    t[i] = 'A'; 
                    if(s.count(t)) q.push(t);
                    t[i] = 'C'; 
                    if(s.count(t)) q.push(t);
                    t[i] = 'G'; 
                    if(s.count(t)) q.push(t);
                    t[i] = 'T'; 
                    if(s.count(t)) q.push(t);
                    
                }
            }
            cnt++;
        }
        return -1;
    }
};