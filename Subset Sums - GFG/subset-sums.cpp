//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
private:
    void allSubsetSum(int index, int sum, vector<int> &arr, int n, vector<int> &allSum) {
        if(index == arr.size()) {
            allSum.push_back(sum);
            return;
        }
        
        allSubsetSum(index+1, sum+arr[index], arr, n, allSum);
        
        allSubsetSum(index+1, sum, arr, n, allSum);
    }
public:
    vector<int> subsetSums(vector<int> arr, int n)
    {
        // Write Your Code here
        vector<int> allSum;
        allSubsetSum(0, 0, arr, n, allSum);
        return allSum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends