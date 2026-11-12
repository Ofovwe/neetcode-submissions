
class Node:
    def __init__(self,val=0,next=None,prev=None):
        self.val = val
        self.next= next
        self.prev = prev
class MyLinkedList:

    def __init__(self):
        self.head = Node()
        self.tail = Node()

        self.head.next = self.tail
        self.tail.prev = self.head
        self.size = 0


    
        
      
        

    def get(self, index: int) -> int:

        if  index>=self.size:
            return -1
        i = 0 
        pCur = self.head.next
        while i<index:
            pCur = pCur.next
            i+=1
        
        return pCur.val




    def addAtHead(self, val: int) -> None:
        NewNode = Node(val,self.head.next,self.head)
        self.head.next.prev=NewNode
        self.head.next = NewNode
        self.size+=1
       

        

    def addAtTail(self, val: int) -> None:
        NewNode = Node(val,self.tail,self.tail.prev)
        self.tail.prev.next= NewNode
        self.tail.prev = NewNode
        self.size+=1
        

    def addAtIndex(self, index: int, val: int) -> None:
        i = 0
        
        pCur = self.head.next
        if index==self.size:
            self.addAtTail(val)
        elif index>self.size:
            return
        else:
            while i<index:
                pCur= pCur.next
                i+=1
            NewNode = Node(val,pCur,pCur.prev)
            pCur.prev.next = NewNode
            pCur.prev = NewNode
            self.size+=1




    def deleteAtIndex(self, index: int) -> None:

        if index<self.size:
            i = 0
            pCur=self.head.next
            while i < index:
                pCur = pCur.next
                i+=1
            
            pCur.prev.next = pCur.next
            pCur.next.prev = pCur.prev

            pCur.next = None
            pCur.prev = None

            self.size-=1
            


        


# Your MyLinkedList object will be instantiated and called as such:
# obj = MyLinkedList()
# param_1 = obj.get(index)
# obj.addAtHead(val)
# obj.addAtTail(val)
# obj.addAtIndex(index,val)
# obj.deleteAtIndex(index)