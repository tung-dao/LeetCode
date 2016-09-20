class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        if (nums.empty())
        {
            return 0;
        }
        
        int uniqueValues = 0;
        int previousUniqueNumber = nums[0];
        
        for (std::vector<int>::iterator iter = nums.begin(); iter != nums.end(); ++iter)
        {
            int offset = 0;
            uniqueValues++;
            
            if((iter+1) == nums.end())
            {
                break;
            }
            
            while (iter+1+offset != nums.end() && *iter == *(iter+1+offset))
            {
                offset++;
            }
            
            if(offset > 0)
            {
                nums.erase(iter+1, iter+1+offset);
            }
        }
        
        return uniqueValues;
    }
};