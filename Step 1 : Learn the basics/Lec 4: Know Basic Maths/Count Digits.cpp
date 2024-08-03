class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int n=N;
        int ans=0;
        while(n>0){
            int rem=n%10;
            if(rem!=0 && N%rem==0)
            ans++;
            n=n/10;
        }
        return ans;
    }
};
