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
class Solution 
{
public:
    ListNode* removeElements(ListNode* head, int val) 
    {
        ListNode* pCur = head;
        ListNode*pPrev = nullptr;
        while(pCur!= nullptr)
        {
            if(pCur->val == val)
            {
                if(pCur == head)
                {
                    head = pCur->next;
                    pCur->next = nullptr; 
                    pCur = head; 

                }
               
                else
                {
                    pPrev->next = pCur->next;
                    
                    pCur->next= nullptr;
                    pCur = pPrev->next;
                    
                }

            }
            
            else
            {
                pPrev = pCur;
                pCur = pCur->next;
            }
           
        }
        return head;
    }
};