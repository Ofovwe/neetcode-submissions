class LinkedList {
public:


    class Node
    {
        public:
        Node(int num)
        {
            pNext= nullptr;
            val = num;
        }
        Node* pNext;
        int val;
    };
    Node* pDummy;
    int size;
    Node*pTail;

    LinkedList() 
    {
        pDummy = new Node(-1);
        pTail = nullptr;
        size=0;
    }

    int get(int index) 
    {
        if(index>=size)
        {
            return -1;
        }
        else
        {
            Node* pCur = pDummy->pNext;
            for(int i = 0; i < index;i++)
            {
                pCur=pCur->pNext;
            }

            return pCur->val;
        }
    }

    void insertHead(int val) 
    {
        Node* pMem = new Node(val);
        pMem->pNext= pDummy->pNext;
        pDummy->pNext = pMem;

        if(size == 0)
        {
            pTail = pMem;
        }
        size++;

    }
    
    void insertTail(int val) 
    {
        if(size==0)
        {
            insertHead(val);
        }
        else
        {
            Node*pMem = new Node(val);
            pTail->pNext= pMem;
            pTail = pMem;
            size++;
        }
    }

    bool remove(int index) 
    {
        if(index>=size)
        {
            return false;
        }
        Node*pTemp = pDummy;
        Node* pCur = pDummy->pNext;
        for(int i = 0 ; i< index;i++)
        {
            pTemp = pCur;
            pCur = pCur->pNext;
        }
        if(index==(size-1))
        {
           
            pTail = pTemp;  
            
        }
        pTemp->pNext= pCur->pNext;
        pCur->pNext= nullptr;
        size--;
        return true;
        
    }

    vector<int> getValues() 
    {
        std::vector<int>s;
        Node*pCur = pDummy->pNext;
        while(pCur!= nullptr)
        {
            s.push_back(pCur->val);
            pCur=pCur->pNext;
        }
        return s;
    }
};
