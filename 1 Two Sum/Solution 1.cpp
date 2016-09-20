class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> result;

        for (int firstNum = 0; firstNum < nums.size()-1; firstNum++)
        {
            for (int secNum = firstNum+1; secNum < nums.size(); secNum++)
            {
                if ((nums[firstNum] + nums[secNum]) == target)
                {
                    result.push_back(firstNum);
                    result.push_back(secNum);
                }
            }
        }

        return result;
    }
};