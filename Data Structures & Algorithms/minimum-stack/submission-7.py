class MinStack:

    def __init__(self):
        self.size = 0
        self.stack = []
        

    def push(self, val: int) -> None:
        self.stack.append(val)
        self.size+=1

        

    def pop(self) -> None:
        self.size-=1
        self.stack.pop()

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return min(self.stack)

        
