class Solution {
  public:
    long long fact(long long N){
        if(N==1)
        return 1;
        return N*fact(N-1);
    }
  
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long> ans;
        if(n>=1)
        ans.push_back(1);
        for(int i=2;i<=n;i++){
            long long k=fact(i);
            if(k<=n)
            ans.push_back(k);
            else
            break;
        }
        return ans;
    }
};
