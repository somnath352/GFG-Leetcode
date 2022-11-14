class Solution {
private:
    int dfs(vector<vector<int>>& stones, vector<int> &vis, int ind, int &n) {
        vis[ind] = 1;
        int ans = 0;
        for(int j = 0;j<n;j++) {
            if(!vis[j] && (stones[ind][0] == stones[j][0] ||
              stones[ind][1] == stones[j][1])) {
                ans += (dfs(stones, vis, j, n) + 1);
            }
        }
        return ans;
    }
public:
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        vector<int> vis(n, 0);
        int ans = 0;
        for(int i = 0;i<n;i++) {
            if(!vis[i]) {
                ans += dfs(stones, vis, i, n);
            }
        }
        return ans;
    }
};