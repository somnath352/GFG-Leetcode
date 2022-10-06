class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        // encoded[i] = arr[i] ^ arr[i+1];
        int n = encoded.size();
        vector<int> answer(n+1);
        answer[0] = first;
        for(int i = 0;i<encoded.size();i++) {
            answer[i+1] = answer[i] ^ encoded[i];  
        }
        return answer;
    }
};

// 0010
// 0011