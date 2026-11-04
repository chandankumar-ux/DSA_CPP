class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        sum=0
        for idx,val in enumerate(nums):
            sum+=val
            nums[idx]=sum
        return nums

        