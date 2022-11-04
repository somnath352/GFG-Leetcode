class Solution {
private:
    bool checkIsVowel(char c) {
        string vowels = "aeiouAEIOU";
        if(vowels.find(c) != string::npos) return true;
        return false;
    }
public:
    string reverseVowels(string s) {
        string vowels = "";
        for(char &c : s) {
            if(checkIsVowel(c)) vowels += c;   
        }
        
        for(int i = 0;i<s.size();i++) {
            if(checkIsVowel(s[i])) {
                s[i] = vowels.back();
                vowels.pop_back();
            }
        }
        return s;
    }
};


// e
// bacdit  a i  ia
// bicdat