class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:






        unique = set()
        i = 0
        
        k = len(nums)
        while i<k:
            unique.add(nums[i])
            i+=1
            
        return not (len(unique)==len(nums))
        

            
