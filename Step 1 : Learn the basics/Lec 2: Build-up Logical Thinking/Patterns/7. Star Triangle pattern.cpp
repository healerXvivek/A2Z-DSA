void nStarTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int s=n-1;s>i;s--)
        cout<<" ";
        for(int j=0;j<=i;j++)
        cout<<"*";
        for(int k=0;k<i;k++)
        cout<<"*";

        cout<<endl;
    }
}
