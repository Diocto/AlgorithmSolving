class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        multimap<int, int> maps;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            maps.insert(make_pair(nums[i],i));
        }
        for (auto it = maps.begin(); it != maps.end(); it++)
        {
            auto tmp = maps.find(target-(*it).first);
            if(maps.count(target-(*it).first) == 2)
            {
                result.push_back((*tmp).second);
                tmp++;
                result.push_back((*tmp).second);
                break;
            }
            else if(tmp != maps.end())
            {
                result.push_back((*it).second);
                result.push_back((*maps.find(target-(*it).first)).second);
                break;
            }
        }
        return result;
    }
};
