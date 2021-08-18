int Solution::maxSubArray(const vector<int> &A) {

   int ans {INT_MIN};
   int store {0};
   int n {A.size()};

   for(int i {0}; i<n; i++)
   {
       store = max(A[i], store + A[i]);
       ans = max(ans, store);
   }
   return ans;
}
