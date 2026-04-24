class Solution {
public:
    bool isValid(string s)
    {
        std::stack <char> n1;
        
       
        for ( int i = 0 ;i < s.size();i++)
        {
            
            if (s[i]=='(')
            {
                n1.push(s[i]);
               
            }
            else if (s[i]=='{')
            {
                n1.push(s[i]);
               
            }
            else if (s[i]=='[')
            {
                n1.push(s[i]);
                
            }
            else if (s[i]==')')
            {
                if (!n1.empty()&& n1.top()=='(' )
                {
                    n1.pop();
                    
                }
                else
                {
                    return false;
                }
                
            }
            else if (s[i]=='}')
            {
                if (!n1.empty()&& n1.top()=='{')
                {
                    n1.pop();
                   
                }
                else
                {
                    return false;
                }
                
            }
            else if (s[i]==']')
            {
                if (!n1.empty()&& n1.top()=='[')
                {
                    n1.pop();
                    
                }
                else
                {
                    return false;
                }
                
            }
           
        }
        if(n1.empty())
        {
            return true;
        }
        else
        {
           return false; 
        }
        
    }
};
