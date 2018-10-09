class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subsetList;
        for(int i = 0; i < nums.size(); i++)
        {
            vector<int> combinations;
            combinations.resize(nums.size());
            for(int j = 1; j <= i; j++)
            {
                combinations[nums.size()-j] = 1;
            }
            do
            {
                vector<int> subset;
                for(int k = 0; k < combinations.size(); k++)
                {
                    if(combinations[k] == 1)
                    {
                        subset.push_back(nums[k]);
                    }
                }
                subsetList.push_back(subset);
            } while(next_permutation(combinations.begin(), combinations.end()));
        }
        subsetList.push_back(nums);
        return subsetList;
    }
};
