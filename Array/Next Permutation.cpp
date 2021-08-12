vector<int> Solution::nextPermutation(vector<int> &A) {

    int n {A.size()};
    int index {-1};

    for(int i {n-1}; i > 0; i--)
    {
        if(A[i] > A[i-1])
        {
            index = i-1;
            break;
        }
    }
    if(index == -1)
    {
        sort(A.begin(),A.end());
        return A;
    }
    index++;
    sort(A.begin()+index, A.end());
    for(int i {index}; i<n; i++)
    {
        if(A[i]>A[index-1])
        {
            swap(A[i],A[index-1]);
            break;
        }
    }
    return A;
}
