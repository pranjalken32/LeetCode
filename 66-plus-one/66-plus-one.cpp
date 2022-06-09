class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         
        bool carry = false;
        
        bool one = true;
        
    
        for (int i = digits.size() - 1; i > -1; i--)
        {
            
            if (not one and not carry)
                break;
    
            int sum  = digits[i] + one + carry;
            

            if (sum == 10)
            {
                
                digits[i] = 0;
        
                carry = true;
            }
    
            else
            {
                
                digits[i] = sum;
        
                carry = false;
            }
        
            if (i == digits.size() - 1)
                one = false;
        }
        

        if (carry)
            digits.insert(digits.begin(), 1);
        
        return digits;
    }
};