void alphaHill(int n) {
    // Write your code here.
    int N=65+n;
    for(int i=65;i<N;i++){
        for(int s=N-1;s>i;s--)
        cout<<" ";
        for(int j=65;j<=i;j++)
        cout<<(char)j<<" ";
        for(int k=i-1;k>=65;k--)
        cout<<(char)k<<" ";

        cout<<endl;
    }
}
