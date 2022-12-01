class Solution {
public:
    bool halvesAreAlike(string s) {
        string vowels = "AEIOUaeiou";
        int cntLeft = 0, cntRight = 0;
        for(int i = 0;i<s.size()/2;i++) {
            if(vowels.find(s[i]) != string::npos) cntLeft++;
        }
        
        for(int i = s.size()/2;i<s.size();i++) {
            if(vowels.find(s[i]) != string::npos) cntRight++;
        }
        
        return cntLeft == cntRight ? true : false;
    }
};