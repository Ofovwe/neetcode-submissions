class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        k = len(nums)
        i = 0

        while i < k:
            if nums[i] == val:
                for p in range(i, k - 1):
                    nums[p] = nums[p + 1]
                k -= 1
                i -= 1

            i += 1

        return k
            


            

            

            
       
        

        
