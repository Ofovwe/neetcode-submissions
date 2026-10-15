class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:

        i = 0
        ans=[]
        flag = 0
        while i<len(nums):
            ans.append(nums[i])
            i+=1
            if flag==0 and i==len(nums):
                i=0
                flag=1
        
        return ans
            

        


        