class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        
        
        k = len(arr)-1
        largest= 0
        i=0

        if len(arr)==1:
            arr[0]=-1
            return arr

        while k>0:
            
           if arr[k]>largest:
                largest = arr[k]
           if k==len(arr)-1:
                arr[k]=-1
    
           if arr[k-1]<largest:
                arr[k-1] = largest
           else:
                temp = arr[k-1]
                arr[k-1]=largest
                largest = temp
            


           k-=1
        
       


        return arr

        
        
        
        
        
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

                
