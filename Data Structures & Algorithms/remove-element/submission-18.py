class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        k = len(nums)
        i = 0
        valid_index = 0
        

        while i < k:
            if nums[i] != val:
                nums[valid_index]=nums[i]
                valid_index+=1
            

            i+=1
        return valid_index

            
                
              
          
            


            

            

            
       
        

        
