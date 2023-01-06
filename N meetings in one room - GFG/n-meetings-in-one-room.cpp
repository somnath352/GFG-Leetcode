//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    
    struct meeting {
        int start;
        int end;
    };
    
    static bool comp(struct meeting a, struct meeting b) {
        return a.end < b.end;
    }
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int s[], int e[], int n)
    {
        struct meeting meet[n];
    	for(int i = 0;i<n;i++) {
    		meet[i].start = s[i];
    		meet[i].end = e[i];
    	}
    
    	sort(meet, meet+n, comp);
    	
    // 	for(int i = 0;i<n;i++) {
    // 	    cout << meet[i].start << " " << meet[i].end << "\n";
    // 	}
    
    	int limit = meet[0].end;
    	int cnt = 1;
    
    	for(int i = 1;i<n;i++) {
    		if(meet[i].start > limit) {
    			limit = meet[i].end;
    			cnt++;
    		}
    	}
    
    	return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends