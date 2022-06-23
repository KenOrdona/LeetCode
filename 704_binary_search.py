class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        length = len(nums) - 1
        begin = 0
        end = length
        result = -1
        while begin <= end:
            mid = ((begin + end) / 2)
            if nums[mid] == target:
                return mid
            elif nums[mid] < target:
                begin = mid+1
            else:
                end = mid-1
            
        
        return result
