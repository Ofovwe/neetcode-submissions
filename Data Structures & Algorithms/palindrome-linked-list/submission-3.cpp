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
    bool isPalindrome(ListNode* head) 
    {
        ListNode*pCur = head;
        std::stack<int>s1;
        while(pCur!= nullptr)
        {
            s1.push(pCur->val);
            pCur= pCur->next;
        }
        pCur=head;
        while(pCur!= nullptr)
        {
            if(s1.top()!=pCur->val)
            {
                return false;
            }
            else
            {
                s1.pop();
            }
            pCur=pCur->next;
        }
        return true;
    }
};