class Solution {
private:
    static bool comp(int &a, int &b) {
        int cntA = bitset<32>(a).count();
        int cntB = bitset<32>(b).count();
        if(cntA == cntB) return a < b;
        return cntA < cntB;
        
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), comp);
        return arr;
    }
};