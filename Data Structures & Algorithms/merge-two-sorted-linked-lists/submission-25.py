# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:

        dummy = ListNode()
        node = dummy 
    
        pCur1 = list1
        pCur2 = list2
    
        while   pCur1 and pCur2:
            if pCur1.val<=pCur2.val:
                node.next = pCur1
                
                pCur1 = pCur1.next
                
            else:
                node.next = pCur2
                pCur2 = pCur2.next
            node = node.next
                
        
        if pCur1:
            node.next= pCur1
        elif pCur2:
            node.next = pCur2
        
        return dummy.next

                

       
                
                
            
