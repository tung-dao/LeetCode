class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int majority(nums[0]);
        int counter(0);
        
        for (int x(0); x<nums.size(); ++x)
        {
            if (nums[x] == majority)
            {
                ++counter;
            }
            else
            {
                --counter;
            }
            
            if (counter<0)
            {
                majority = nums[x];
                counter = 1;
            }
        }
        
        return majority;
        
    }
};