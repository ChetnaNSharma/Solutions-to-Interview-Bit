vector<int> Solution::wave(vector<int> &A) {

    int n {A.size()};
    if(n%2 == 1) n = n-1;
    sort(A.begin(),A.end());

    for(int i {0}; i<n; i+=2)
    {
        swap(A[i],A[i+1]);
    }
    return A;
}
