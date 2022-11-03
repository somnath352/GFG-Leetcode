```
class Solution {
public:
int longestPalindrome(vector<string>& words) {
unordered_map<string, int> mpp;
int longestPalindrome = 0, unpair = 0;
for(auto ele : words) {
// check the element is equal
if(ele[0] == ele[1]) {
if(mpp[ele]) {
longestPalindrome += 4;
mpp[ele]--;
unpair--;
}
else {
mpp[ele]++;
unpair++;
}
}
// not equal case
else {
string rev = ele;
reverse(rev.begin(), rev.end());
if(mpp[rev]) {
longestPalindrome += 4;
mpp[rev]--;
}
else {
mpp[ele]++;
}
}
}
if(unpair > 0) longestPalindrome += 2;
return longestPalindrome;
}
};
```