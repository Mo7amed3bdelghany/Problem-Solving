class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            if (target - nums[i]) in nums[i+1:]:
                return [nums.index(nums[i]), nums[i+1:].index(target - nums[i])+i+1]