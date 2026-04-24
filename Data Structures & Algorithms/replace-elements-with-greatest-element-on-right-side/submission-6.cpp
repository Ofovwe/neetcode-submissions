class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        int i = 0;
        for ( i ; i < arr.size()-1;i++)
        {
            int max =0;
            for (int f = i+1; f <arr.size();f++)
            {
                if (max<arr[f])
                {
                    max = arr[f];
                }
            }
            arr[i]= max;
        }
        arr[i] = -1;
        return arr;
    }
    
};