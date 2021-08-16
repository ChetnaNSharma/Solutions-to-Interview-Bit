vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {

    int i {0};
    int j {0};
    vector <int> row;
    vector<vector<int>> ans;

    for(int k {0}; k<A[0].size(); k++)
    {
        i = 0;
        j = k;
        while(j >= 0)
        {
        row.push_back(A[i][j]);
        j--;
        i++;
        }
    ans.push_back(row);
    row.clear();
    }

    for(int k {1}; k<A[0].size(); k++)
    {
        i = k;
        j = A.size() - 1;
        while(i <= A.size() - 1)
        {
        row.push_back(A[i][j]);
        j--;
        i++;
        }
    ans.push_back(row);
    row.clear();
    }

    return ans;
}
