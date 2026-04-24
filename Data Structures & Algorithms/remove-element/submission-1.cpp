class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int not_val=0;
        for ( int i = 0 ; i < nums.size();i++)
        {
            if (nums[i]==val)
            {
                int temp = i;
                while (temp<nums.size()-1)
                {
                    nums[temp]=nums[temp+1];
                    temp++;
                }
                nums.pop_back();
                i--;
            }
            else
            {
                not_val++;
            }
        }
        return not_val;
    }
};