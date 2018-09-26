class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        if(nums[0] == 0 && nums.size() != 1)
            return false;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                if(isBlockingNumber(i, nums))
                    return false;
            }
        }
        return true;
    }
    bool isBlockingNumber(int index, vector<int>& nums)
    {
        if(index == nums.size()-1)
        {
            return false;
        }
        int nowIndex = index - 1;
        int maxNum = 1;
        bool isBlocking = true;
        while(nowIndex >= 0)
        {
            if(nums[nowIndex] > maxNum)
            {
                return false;
            }
            nowIndex--;
            maxNum++;
        }
        return true;
    }
};
