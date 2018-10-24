class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp(num+1,0);
        dp[0] = 0;
        dp[1] = 1;
        for(int bi = 2; num >= bi; bi*=2)
        {
            for(int i = 0; i + bi <= num; i++)
            {
                dp[bi+i] = dp[i]+1;
            }
        }
        return dp;
    }
};
