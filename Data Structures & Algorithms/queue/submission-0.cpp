class Deque {
public:

    class Node
    {
        public:
        Node(int num)
        {
            pNext= nullptr;
            pPrev = nullptr;
            val = num;
            

        }
        Node*pNext;
        Node* pPrev;
        int val;
        
    };
    Node*pHead;
    Node*pTail;
    int size;
    Deque() 
    {
        pHead= nullptr;
        pTail = nullptr;
        size = 0;
    }

    bool isEmpty() 
    {

        return pHead==nullptr;
    }

    void append(int value) 
    {
        Node* pMem = new Node(value);
        if(pTail== nullptr)
        {
            
            pTail= pMem;
            pHead= pMem;
        
        }
        else
        {
            
            pTail->pNext= pMem;
            pMem->pPrev = pTail;
            pTail=pMem;
        }
        size++;

    }

    void appendleft(int value) 
    {
        Node* pMem = new Node(value);
        if(pHead== nullptr)
        {
            
            pHead= pMem;
            pTail = pMem;

        }
        else
        {
            pHead->pPrev= pMem;
            pMem->pNext = pHead;
            pHead = pMem;
        }
        size++;
    }

    int pop() 
    {
        if (!this->isEmpty())
        {
            int a = pTail->val;
            if(this->size==1)
            {
                
                this->pHead=nullptr;
                this->pTail = nullptr;
            }
            else
            {
                Node*pCur= pTail->pPrev;
                pTail->pPrev= nullptr;
                pCur->pNext = nullptr;
                pTail = pCur;
            }
            size--;
            return a;
            
        }
        else
        {
            return -1;
        }


    }

    int popleft() 
    {
        
        if(!this->isEmpty())
        {
            int a = pHead->val;
            if(this->size==1)
            {
                this->pTail= nullptr;
                this->pHead= nullptr;
            }
            else
            {
                Node*pCur= pHead->pNext;
                pCur->pPrev= nullptr;
                pHead->pNext= nullptr;
                pHead= pCur;
            }
            size--;
            return a;
            
        }
        else
        {
            return -1;
        }
    }
};
