class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        int f[N+1]={0};
        for(int i=0;i<N;i++){
            if(arr[i]<=N)
            f[arr[i]]++;
        }
        for(int i=1;i<=N;i++)
        arr[i-1]=f[i];
    }
};
