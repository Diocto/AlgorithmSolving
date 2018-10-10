class Solution {
public:
    static bool bigerWnH(pair<int,int> envel1, pair<int,int> envel2)
    {
        if(envel1.first != envel2.first)
            return envel1.first < envel2.first;
        else
            return envel1.second < envel2.second;
    }
    
    int maxEnvelopes(vector<pair<int, int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end(), bigerWnH);
        vector<int> dp;
        dp.resize(envelopes.size());
        int maxRussianNum = 0;
        for(int i = 0; i < envelopes.size(); i++)
        {
            dp[i] = 1;
            for(int j = i - 1; j >= 0; j--)
            {
                if(envelopes[i].first > envelopes[j].first &&
                  envelopes[i].second > envelopes[j].second &&
                  dp[i] <= dp[j])
                {
                    dp[i] = dp[j] + 1;
                }
            }
        }
        for(int i = 0; i < dp.size(); i++)
        {
            maxRussianNum = max(maxRussianNum,dp[i]);
        }
        return maxRussianNum;
    }
};
