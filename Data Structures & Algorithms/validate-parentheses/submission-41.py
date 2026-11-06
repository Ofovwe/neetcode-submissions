class Solution:
    def isValid(self, s: str) -> bool:
        current_size = 0 
        
        open_stack = []
        current_size= 0
        for i in range(len(s)):

            if s[i]== "(" or s[i]=="[" or s[i]=="{":
                open_stack.append(s[i])
                current_size+=1
            if s[i]==")":
                
                if current_size == 0:
                    return False
                if open_stack[current_size-1] !="(":
                    return False
                else:
                    open_stack.pop()
                    current_size-=1
            if s[i]=="}":
                if current_size ==0:
                    return False
                if open_stack[current_size-1] !="{":
                    return False
                else:
                    open_stack.pop()
                    current_size-=1
            if s[i]=="]":
                if current_size == 0:
                    return False
                if open_stack[current_size-1] !="[":
                    return False
                else:
                    open_stack.pop()
                    current_size-=1
        return not open_stack
        
            


        
        
        
        
     

        
        
      

        