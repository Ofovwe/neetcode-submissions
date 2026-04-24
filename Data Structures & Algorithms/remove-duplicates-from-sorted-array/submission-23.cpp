class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    { 
        if (nums.empty()) return 0;
        int start = nums[0];
        int unique = 1;
        for (int i = 1 ; i < nums.size();i++)
        {
            if (start==nums[i])
            {
                int temp = i;
                while (temp <nums.size()-1)
                {
                    nums[temp]=nums[temp+1];
                    temp++;
                }
                nums.pop_back();
                i--;
            }
            else
            {
                unique++;
                start = nums[i];
            }

        }
        return unique;
    }
};