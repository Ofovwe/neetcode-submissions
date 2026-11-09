# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        pCur = head
        pPrev= None
        while pCur:
            next1 = pCur.next
            pCur.next = pPrev
            pPrev = pCur
            pCur = next1

        return pPrev

        