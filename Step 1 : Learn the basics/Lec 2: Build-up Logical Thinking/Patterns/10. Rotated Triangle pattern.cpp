void nStarTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
    for(int i=0;i<n-1;i++){
        for (int j = n-1; j > i; j--) {
                cout << "*";
        }
        cout << endl;
}
}
