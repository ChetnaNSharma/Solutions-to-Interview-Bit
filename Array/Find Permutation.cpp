vector<int> Solution::findPerm(const string A, int B) {

    vector<int> ans;
    int a {1};
    int b {B};

    for(int i {0}; i<B-1; i++)
    {
        if(A[i] == 'I') ans.push_back(a++);
        else ans.push_back(b--);
    }
    if(A[B-2] == 'I') ans.push_back(b);
    else ans.push_back(a);
    return ans;
}
