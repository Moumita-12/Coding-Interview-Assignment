int lengthOfLIS(vector<int>& nums) {
  int n = nums.size();
    if (n <=1) {
        return nums.size();
    }
    vector<int> dp(n, 1); 
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] > nums[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    return *max_element(dp.begin(), dp.end()); 
}

//time : O(n^2)
//space : O(n)
