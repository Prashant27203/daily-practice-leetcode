class Solution {
public:
    int kthGrammar(int n, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
       if(n==1 and k == 1){
           return 0;
       }
       int lengthofrow = pow(2,n-1);
       int mid = lengthofrow/2;
       if(k<=mid)
       {
           return kthGrammar(n-1,k);
       }
       else {
           return !kthGrammar(n-1,k-mid);
       }
    }
};