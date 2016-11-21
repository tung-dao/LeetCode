class Solution {
public:
    int reverse(int x) {
        
        long result(0);
        
        while (x)
        {
            result*=10;
            result+=x%10;
            
            x/=10;
        }
        
        if (result < INT_MIN || result > INT_MAX)
        {
            return 0;
        }
        else
        {
            return result;
        }
    }
};