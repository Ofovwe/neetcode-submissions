class DynamicArray {
public:

    int *arr;
    int max_size;
    int current_size;
    
    DynamicArray(int capacity) 
    {
        this->max_size=capacity;
        int* newarr = new int[capacity];
        this->arr = newarr;
        this->current_size=0;
      
    }

    int get(int i) 
    {
       return arr[i];
    }

    void set(int i, int n) 
    {
        arr[i]=n;
    }

    void pushback(int n) 
    {
        if(current_size==max_size)
        {
            resize();
        }
        
        arr[current_size]=n;
        
        current_size++;
        
        
    }

    int popback() 
    {
        
        
   

        int a = arr[current_size - 1];
        current_size--;
        return a;
    }

    void resize() 
    {
        
        int size = max_size*2;
        int* newarr = new int[size];
        for( int i = 0 ; i <current_size;i++)
        {
            newarr[i]= arr[i];
        }
        delete[] arr;
        this->arr=newarr;
        this->max_size*=2;
    }

    int getSize() 
    {
        return this->current_size;
    }

    int getCapacity() 
    {
        return this->max_size;
    }
};
