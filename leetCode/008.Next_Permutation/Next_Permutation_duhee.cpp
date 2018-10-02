class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()<2)
            return;
        int i;
        bool isThisLastPermutation = true;
        for(i = nums.size()-2; i >= 0; i--)
        {
            if(nums[i] < nums[i+1])
            {
                isThisLastPermutation = false;
                break;
            }
        }
        if(isThisLastPermutation)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        int k;
        for(k = nums.size()-1; k >=0; k--)
        {
            if(nums[i] < nums[k])
                break;
        }
        swap(nums[i],nums[k]);
        reverse(nums.begin() + i + 1, nums.end());
        return;
    }
};
