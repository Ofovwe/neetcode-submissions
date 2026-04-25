class DynamicArray 
{
public:

    int max_size;
    int current_size;
    int* arr;
    DynamicArray(int capacity) 
    {
        max_size =capacity;
        current_size=0;
        arr = new int[capacity];
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
        if (max_size==current_size)
        {
            resize();
            
        }
        arr[current_size]=n;
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
        for(int i = 0 ; i < current_size;i++)
        {
            newarray[i]=arr[i];
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
