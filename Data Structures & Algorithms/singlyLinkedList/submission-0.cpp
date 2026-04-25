class LinkedList {
public:


    class Node
    {
        public:
        Node(int num)
        {
            this->pNext = nullptr;
            this->val = num;


        }
        Node*pNext;
        int val;
        
    };

    Node*pHead;
    int size;
    LinkedList() 
    {
        this->pHead = nullptr;
        this->size=0;
    }

    int get(int index) 
    {
        if(index >= size)
        {
            return -1;
        }
        else
        {
            Node*pCur= this->pHead;
            for (int i = 0 ; i < index;i++)
            {
                pCur= pCur->pNext;
            }
            return pCur->val;
        }
       
        
       
    }

    void insertHead(int val) 
    {
        if(this->pHead==nullptr)
        {
            this->pHead=new Node(val);
            size++;
        }
        else
        {
            Node*pMem = new Node(val);
            pMem->pNext= pHead;
            this->pHead= pMem;
            this->size++;
        }
    }
    
    void insertTail(int val) 
    {
        if(size==0)
        {
            insertHead(val);
            
        }
        else
        {
            Node* pCur= this->pHead;
            while(pCur->pNext != nullptr)
            {
                pCur= pCur->pNext;
            }
            pCur->pNext= new Node(val);
            size++;
           
        }
    }

    bool remove(int index) 
    {
        if(index >= size)
        {
            return false;
        }
        else if(index==0)
        {
            Node*pCur = this->pHead;
            this->pHead= pCur->pNext;
            pCur->pNext= nullptr;
            size--;
            return true;
            
        }
        else
        {
            Node*pCur= this->pHead;
            Node*pTemp = nullptr;
            for (int i = 0 ; i < index;i++)
            {
                pTemp= pCur;
                pCur= pCur->pNext;
            }

            if(pCur->pNext==nullptr)
            {
                pTemp->pNext= nullptr;
                size--;
                return true;
                
            }
            else
            {
                pTemp->pNext= pCur->pNext;
                pCur->pNext= nullptr;
                size--;
                return true;
                
            }

        }
    }

    vector<int> getValues() 
    {
        std::vector<int> arr;

        Node*pCur = this->pHead;
        
        while(pCur!= nullptr)
        {
            arr.push_back(pCur->val);
            
            pCur=pCur->pNext;
        }
        return arr;
        
    }
};
