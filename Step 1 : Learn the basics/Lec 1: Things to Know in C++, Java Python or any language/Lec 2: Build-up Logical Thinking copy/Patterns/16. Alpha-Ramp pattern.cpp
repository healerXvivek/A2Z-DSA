void alphaRamp(int n) {
    // Write your code here.
    int N=65+n;
    for(int i=65;i<N;i++){
      for (int j = 65; j <= i; j++) {
        cout << (char)i << " ";
      }
      cout << endl;
    }
}
