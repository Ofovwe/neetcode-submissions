class LinkedList {
public:
    
    class Node
    {
        public:
        Node(int num)
        {
            this->val = num;
            this->pNext= nullptr;
        }

        Node*pNext;
        int val;
    };
    
    Node*pTail;
    Node*pDummy;
    int size;
    LinkedList() 
    {
        
        pDummy= new Node(-1);
        pTail = nullptr;
        size=0;
    }

    int get(int index) 
    {
        if (index>=size)
        {
            return -1;
        }
        Node*pCur = pDummy->pNext;
        for ( int i = 0 ; i<index;i++)
        {
            pCur=pCur->pNext;
        }
        return pCur->val;
    }

    void insertHead(int val) 
    {
        Node* pMem = new Node(val);
        if(pTail==nullptr)
        {
            pDummy->pNext= pMem;
            pTail = pMem;
            
        }
        else
        {
            pMem->pNext=pDummy->pNext;
            pDummy->pNext= pMem;
        }
        size++;
    }
    
    void insertTail(int val) 
    {
        
        if(pTail==nullptr)
        {
            insertHead(val);
        }
        else
        {
            pTail->pNext = new Node(val);
            pTail = pTail->pNext;
            size++;
        }
    }

    bool remove(int index) 
    {
        if(index>=size)
        {
            return false;
        }
        Node* pCur= pDummy->pNext;
        Node*pTemp = pDummy;
        for(int i = 0 ; i < index;i++)
        {
            pTemp = pCur;
            pCur=pCur->pNext;
        }
        if (pCur == pTail)
        {
           pTail = pTemp;
        }

        pTemp->pNext = pCur->pNext;
        pCur->pNext= nullptr;
        size--;
        return true;
        

    }

    vector<int> getValues() 
    {
        std::vector<int> newarray;
        Node*pCur= pDummy->pNext;
        int i =0;
        
        while(pCur!= nullptr)
        {
            newarray.push_back(pCur->val);
            
            pCur=pCur->pNext;
            
        }
        return newarray;
    }
};
