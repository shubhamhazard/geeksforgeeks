class Solution {
  public:
    int fun(int idx, vector<int> &height, vector<int> &dp)
    {
        if(idx == 0) return 0;
        if(dp[idx] != -1) return dp[idx];
        
        
        int left = fun(idx-1, height,dp)+ abs(height[idx] - height[idx-1]);
        int right = INT_MAX;
        if(idx > 1)
            right = fun(idx-2, height,dp) + abs(height[idx] - height[idx-2]);
            
        return dp[idx] = min(left, right);
    }
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        vector<int> dp(n+1, -1);
        return fun(n-1, height, dp);
    }
};