class Solution:
    def countHillValley(self, nums: List[int]) -> int:
        cnt=0
        lst = [nums[0]]
        for i in nums:
            if i != lst[-1]: lst.append(i)

        for i in range(1, len(lst)-1):
            if (lst[i-1]<lst[i]>lst[i+1]) | (lst[i-1]>lst[i]<lst[i+1]): cnt+=1

        return cnt
