class Node:
    def __init__(self,val="", next= None, prev= None):
        self.val = val
        self.next=next
        self.prev=prev

class BrowserHistory:

    def __init__(self, homepage: str):
        NewNode = Node(homepage,None,None)
        self.head = Node( 0 ,next= NewNode,prev = None)
        self.tail = Node(0,next= None ,prev= NewNode)
        NewNode.prev= self.head
        NewNode.next = self.tail
        self.currentpage = NewNode
        

        

    def visit(self, url: str) -> None:
        NewNode = Node(url,self.tail,self.currentpage)
        self.currentpage.next= NewNode
        self.currentpage = NewNode

        

    def back(self, steps: int) -> str:
        i = 0
        cur = self.currentpage
        while cur.prev != self.head and i<steps:
            cur = cur.prev
            i+=1
        self.currentpage = cur

        return cur.val
        


    def forward(self, steps: int) -> str:
        i = 0
        cur = self.currentpage
        while cur.next != self.tail and i<steps:
            cur = cur.next
            i+=1


        self.currentpage = cur

        return cur.val
        


# Your BrowserHistory object will be instantiated and called as such:
# obj = BrowserHistory(homepage)
# obj.visit(url)
# param_2 = obj.back(steps)
# param_3 = obj.forward(steps)