class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        
        i=0
       
        while i<len(arr)-1:

            p=i+1
            maxx=0
            while p<len(arr):
                
                if arr[p] > maxx:
                    maxx = arr[p]
                p+=1
            arr[i]=maxx
            i+=1
            
        
        arr[i]= -1

        return arr

                
