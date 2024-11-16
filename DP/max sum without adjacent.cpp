https://www.geeksforgeeks.org/problems/max-sum-without-adjacents2430/1

class Solution{
public:	
	// calculate the maximum sum with out adjacent
	   // DP tabulation
	  int solve(int *arr, int n){
	      if(n == 0)
	        return arr[n];
	        
	       vector<int> dp(n+1, 0);
	       dp[0] = arr[0];
	       
	       for(int i = 1; i < n; i++){
	           int inc = arr[i] + dp[i-2];
	           int exc = 0 + dp[i-1];
	           
	           dp[i] = max(inc, exc);
	       }
	       
	       return dp[n-1];
	  }



    int solve(int *arr, int n){
        int prev2 = 0;
        int prev1 = arr[0];
        
        for(int i = 1; i < n; i++){
            int inc = arr[i] + prev2;
            int exc = prev1;
            int ans = max(inc, exc);
            
            prev2 = prev1;
            prev1 = ans;
        }
        return prev1;
    }
	
	int findMaxSum(int *arr, int n) {
	    return solve(arr, n);
	}
};
