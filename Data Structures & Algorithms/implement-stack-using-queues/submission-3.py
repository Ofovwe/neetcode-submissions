from collections import deque
class MyStack:

    def __init__(self):
        self.q1= deque()
        self.q2= deque()
        self._top = 0

    def push(self, x: int) -> None:
        self.q1.append(x)
        self._top=x
        

    def pop(self) -> int:
        while len(self.q1) > 1:
            newtop = self.q1.popleft()
            self.q2.append(newtop)
        
        
      
        
        popped= self.q1.popleft()
            
       
        
        self.q1= self.q2
        self.q2 = deque()
        if  self.q1:
            self._top = newtop
        return popped


    def top(self) -> int:
        return self._top
    

    def empty(self) -> bool:
        return not self.q1
        


# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()