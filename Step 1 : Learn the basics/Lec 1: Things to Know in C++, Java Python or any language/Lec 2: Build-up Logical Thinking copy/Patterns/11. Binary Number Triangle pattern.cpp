void nBinaryTriangle(int n) {
    // Write your code here.
    int f=1;
    for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
                if (f == 1) {
                if (j % 2 != 0)
                    cout << "1 ";
                else
                    cout << "0 ";
                } else {
                if (j % 2 != 0)
                    cout << "0 ";
                else
                    cout << "1 ";
                }
                }
                if (f == 1)
                f = 0;
                else
                f = 1;
                cout << endl;
    }
}
