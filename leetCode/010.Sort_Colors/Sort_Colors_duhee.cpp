class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> colorNums = {0,0,0};
        for(auto color : nums)
        {
            colorNums[color]++;
        }
        int totalIndex = 0;
        for(int i = 0; i < 3; i++)
        {
            while(colorNums[i] > 0)
            {
                nums[totalIndex] = i;
                colorNums[i]--;
                totalIndex++;
            }
        }
    }
};
