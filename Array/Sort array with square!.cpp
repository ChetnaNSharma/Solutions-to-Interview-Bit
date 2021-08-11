vector<int> Solution::solve(vector<int> &A) {
     int s {A.size()};
    int i {0};
    int index_neg {-1};
    int index_pos {-1};
    vector<int> ans;

    while(i<s)
    {
        if(A[i]<0) index_neg = i;
        A[i] = A[i]*A[i];
        i++;
    }

   index_pos = index_neg + 1;

   while(index_neg >=0 || index_pos<s)
   {
       if(index_neg == -1) ans.push_back(A[index_pos++]);
       else if(index_pos == s) ans.push_back(A[index_neg--]);
       else
       {
           if(A[index_neg] <= A[index_pos]) ans.push_back(A[index_neg--]);
           else ans.push_back(A[index_pos++]);
       }
   }
   return ans;

}
