class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        zipped_nums = zip(nums, range(len(nums)))
        zipped_nums = zip(nums, range(len(nums)))
        sorted_zipped_nums = sorted(zipped_nums, key=lambda x: x[0])

        i = 0
        j = len(sorted_zipped_nums) - 1
        while True:
            sum = sorted_zipped_nums[i][0] + sorted_zipped_nums[j][0]
            if sum > target:
                j -= 1
                continue
            elif sum < target:
                i += 1
                continue
            else:
                return [sorted_zipped_nums[i][1], sorted_zipped_nums[j][1]]
