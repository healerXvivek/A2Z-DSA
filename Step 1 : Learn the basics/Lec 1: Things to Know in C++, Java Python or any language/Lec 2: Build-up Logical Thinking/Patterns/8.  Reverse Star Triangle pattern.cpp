void nStarTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int s=0;s<i;s++)
        cout<<" ";
        for(int j=n-1;j>=i;j--)
        cout<<"*";
        for(int k=n-1;k>i;k--)
        cout<<"*";

        cout<<endl;
    }
}
