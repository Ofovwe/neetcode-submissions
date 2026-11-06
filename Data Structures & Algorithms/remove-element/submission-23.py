class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        i = 0 
        size =len(nums) 
        while i<size:
            if nums[i]==val:
                k = i 
                size-=1
                while k<size:
                    nums[k]= nums[k+1]
                    k+=1
            else:
                i+=1
        
       
        return size
        
            
                


        

    

        
    
           