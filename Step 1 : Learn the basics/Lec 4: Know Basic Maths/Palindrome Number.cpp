class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        int n=x;
        int ans=0;
        while(n!=0){
            int rem=n%10;
            if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
                return 0;
            }
            ans=ans*10+rem;
            n=n/10;
        }
        return(ans==x);
    }
};
