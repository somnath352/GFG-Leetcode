//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            String[] str = br.readLine().trim().split(" ");
            int[] array = new int[n - 1];
            for (int i = 0; i < n - 1; i++) {
                array[i] = Integer.parseInt(str[i]);
            }
            Solution sln = new Solution();
            System.out.println(sln.missingNumber(array, n));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    // 1 1 1 0 1
    private int giveMissNum(int arr[], int n) {
        int vis[] = new int[n];
        for(int i = 0;i<arr.length;i++) {
            vis[arr[i]-1] = 1;
        }
        // for(int it : vis) System.out.println(it);
        
        for(int i = 0;i<n;i++) {
            if(vis[i] == 0) return i+1;
        }
        return 0;
    }
    int missingNumber(int array[], int n) {
        // Your Code Here
        int ans = giveMissNum(array, n);
        return ans;
    }
}