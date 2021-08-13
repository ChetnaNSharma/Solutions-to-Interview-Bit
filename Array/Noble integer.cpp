int Solution::solve(vector<int> &A) {
    int n {A.size()};
    int ans {-1};
    int i {0};

    if(!n)  return ans;
    sort(A.begin(), A.end());
    while(i < n)
    {
        while(i+1 < n && A[i] == A[i+1]) i++;

        if(n - (i+1) == A[i])
        {
            ans = 1;
            break;
        }

        i++;
    }

    return ans;
}
