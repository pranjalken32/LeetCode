class Solution {
public:
    bool isPalindrome(int x) {
        long int temp= x;
        long int a=0;
       long int reverse=0;
        if(x>=0){
            while(x>0){
                a=x%10;
                reverse= reverse*10+a;
                x=x/10;
            } 
            if(temp==reverse)
                return true;
    
        }
           return false;
        
    }
};