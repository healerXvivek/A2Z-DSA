void nLetterTriangle(int n) {
    // Write your code here.
    int N=65+n;
    for(int i=N-1;i>=65;i--){
      for (int j = 65; j <= i; j++) {
        cout << (char)j << " ";
      }
      cout << endl;
    }
}
