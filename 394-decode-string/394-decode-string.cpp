class Solution {
public:
    int i = 0;
    string decodeString(string s) {
        string finalAns = "";
        int count = 0;
        string ans = "";
        
        while(i < s.size()) {
            char c = s[i];
            i++;
            
            if(c == '[') {
                ans = decodeString(s);
                for(int j = 0;j<count;j++) {
                    finalAns += ans;
                }
                count = 0;
            }
            else if(c == ']') break;
            else if(isalpha(c)) {
                finalAns += c;
            }
            else count = count * 10 + c - '0';
        }
        return finalAns;
    }
};