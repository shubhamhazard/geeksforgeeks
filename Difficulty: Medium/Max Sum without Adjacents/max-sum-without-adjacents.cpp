// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int maxSum(int idx, vector<int> &arr, vector<int> &dp)
    {
        if(idx == 0)
            return arr[idx];
        if(idx < 0)
            return 0;
        if(dp[idx] != -1)
            return dp[idx];
        int pick = arr[idx] + maxSum(idx-2, arr,dp);
        int notPick = 0 + maxSum(idx-1, arr,dp);
        
        return dp[idx] = max(pick,notPick);
    }
    int findMaxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> dp(n+1, -1);
        return maxSum(n-1,arr, dp);
    }
};