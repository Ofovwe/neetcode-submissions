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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* pCur1 = list1;
        ListNode* pCur2 = list2;

        ListNode* dummy = new ListNode();
        ListNode* tail = dummy;

        while (pCur1 != nullptr && pCur2 != nullptr)
        {
            if (pCur1->val <= pCur2->val)
            {
                tail->next = pCur1;
                pCur1 = pCur1->next;
            }
            else
            {
                tail->next = pCur2;
                pCur2 = pCur2->next;
            }

            tail = tail->next;
        }

        if (pCur1 != nullptr)
        {
            tail->next = pCur1;
        }
        else
        {
            tail->next = pCur2;
        }

        return dummy->next;
    }
};
