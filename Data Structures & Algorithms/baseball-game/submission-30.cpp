class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        vector<int> scores(operations.size());
        int size  = 0;
        for (int i = 0 ; i < operations.size();i++)
        {
            if(operations[i]=="+")
            {
               int num =  scores[size-2]+ scores[size-1];
               scores[size]= num;
               size++;
            }
            else if(operations[i]=="D")
            {
                int num = scores[size-1]*2;
                scores[size]= num;
                size++;
            }
            else if (operations[i]=="C")
            {
                size--;
            }
            else
            {
                scores[size]=stoi(operations[i]);
                size++;
            }

        }
        int total = 0;
        for ( int k = 0 ; k<size;k++)
        {
            total += scores[k];
        }
        return total;
    }
};