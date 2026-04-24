/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
       ListNode* pCur = head;
       ListNode* pPrev = nullptr;
       while(pCur != nullptr)
       {
            ListNode*save = pCur->next;
           if(pCur == head)
           {
             pCur->next = nullptr;
           }
           else
           {
                pCur->next=pPrev;
           }
           pPrev=pCur;
           pCur = save;
        }
        return pPrev;

    }
};
