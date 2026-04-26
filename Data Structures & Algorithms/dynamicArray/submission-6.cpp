class DynamicArray {
public:

    int current_size;
    int max_size;
    int* arr;

    DynamicArray(int capacity) 
    {
        arr = new int[capacity];
        max_size=capacity;
        current_size = 0;
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
        arr[current_size]= n;
        current_size++;
    }

    int popback() 
    {
        int a = arr[current_size-1];
        current_size--;
        return a;
    }

    void resize() 
    {
        int* newarray = new int[max_size*2];
        for(int i = 0 ; i < max_size;i++)
        {
            newarray[i]= arr[i];
        }

        arr = newarray;
        max_size*=2;
    }

    int getSize() 
    {
        return current_size;
    }

    int getCapacity()
    {
        return max_size;
    }
};
