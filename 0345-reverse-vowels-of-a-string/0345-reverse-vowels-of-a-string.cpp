class Solution {
private:
    bool checkIsVowel(char c) {
        string vowels = "aeiouAEIOU";
        if(vowels.find(c) == string::npos) return false;
        return true;
    }
public:
    string reverseVowels(string s) {
        int n = s.size();
        int i = 0, j = n-1;
        while(i < j) {
            if(checkIsVowel(s[i]) && checkIsVowel(s[j])) {
                swap(s[i++], s[j--]);
            }
            else if(!checkIsVowel(s[i]) && checkIsVowel(s[j])) {
                i++;
            }
            else if(checkIsVowel(s[i]) && !checkIsVowel(s[j])) {
                j--;
            }
            else {
                i++; j--;
            }
        }
        return s;
    }
};


// e
// bacdit  a i  ia
// bicdat