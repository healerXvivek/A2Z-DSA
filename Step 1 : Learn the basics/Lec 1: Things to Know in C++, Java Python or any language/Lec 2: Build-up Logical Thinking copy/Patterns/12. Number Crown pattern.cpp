void numberCrown(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
      for (int j = 1; j <= i; j++) 
        cout << j << " ";
        for (int s = (n * 2)-(i*2); s >= 1; s--)
          cout << "  "; 
        for (int k = i; k >= 1; k--)
          cout << k << " ";

      cout<<endl;
    }
}
