class Solution 
{
public:
   
   
   int calPoints(vector<string>& operations) 
   {
        vector<int> scores(operations.size());
        
        int num1 = 0; 
        int num2 = 0;
        int score1= 0;
        int k = 0;
        for ( int i = 0 ; i < operations.size();i++)
        {
            if(operations[i]=="+")
            {
                 num1 =scores[k-2];
                 num2 =scores[k-1];
                 scores[k]= num1+num2;
                 k++;
  

            }
            else if(operations[i]=="D")
            {
               scores[k]=scores[k-1]*2;
               k++;
            }
            else if(operations[i]=="C")
            {
                k--;
            }
            else
            {
                scores[k]=stoi(operations[i]);
                k++;
            }
            
        }
        for (int i = 0 ; i <k;i++)
        {
            score1+=scores[i];
        };

        return score1;

    }
};