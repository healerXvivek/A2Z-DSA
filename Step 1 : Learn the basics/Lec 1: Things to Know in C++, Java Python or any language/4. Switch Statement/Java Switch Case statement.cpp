class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        // code here
        double ans=0;
        switch(choice){
            case 1:
            ans=(M_PI*arr[0]*arr[0]);
            return ans;
            break;
            case 2:
            ans=arr[0]*arr[1];
            return ans;
            break;
        }
    }
};
