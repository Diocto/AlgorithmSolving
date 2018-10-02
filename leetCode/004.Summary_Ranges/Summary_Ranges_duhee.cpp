class Solution {
public:
	vector<string> summaryRanges(vector<int>& nums) {
		string output;
		vector<int> startNumber;
		vector<string> solution;
		if (nums.size() == 1)
		{
			solution.push_back(to_string(nums[0]));
			return solution;
		}
		else if (nums.size() == 0)
			return solution;
		else
		{
			int pointer = 0;
			while (pointer < nums.size())
			{
				if (startNumber.size() == 0)
				{
					startNumber.push_back(nums[pointer]);
				}
				else
				{
					if (nums[pointer] - nums[pointer - 1] != 1)
					{
						output = to_string(startNumber[0]);
						if (startNumber[0] != nums[pointer - 1])
						{
							output.append("->");
							output.append(to_string(nums[pointer - 1]));
						}
						solution.push_back(output);
						startNumber.clear();
						startNumber.push_back(nums[pointer]);
					}
				}
				pointer++;
			}
			output = to_string(startNumber[0]);
			if (nums[pointer - 1] - nums[pointer - 2] == 1)
			{
				output.append("->");
				output.append(to_string(nums[pointer - 1]));
			}
			solution.push_back(output);
			return solution;
		}
	}
};
