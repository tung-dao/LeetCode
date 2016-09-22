class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        last =-1
        digits[last] += 1
        
        while digits[last]>= 10:
            digits[last] -= 10
            last -= 1

            if (last + len(digits) >= 0):
                digits[last] += 1
            else:
                digits.insert(0,1)

        return digits