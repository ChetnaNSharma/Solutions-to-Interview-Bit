int Solution::maxArr(vector<int> &A) {

    int n {A.size()};
    int add_min {INT_MAX};
    int sub_min {INT_MAX};
    int add_max {INT_MIN};
    int sub_max {INT_MIN};

    for(int i {0}; i < n; i++)
    {
        add_min = min(A[i] + i, add_min);
        sub_min = min(A[i] - i, sub_min);
        add_max = max(A[i] + i, add_max);
        sub_max = max(A[i] - i, sub_max);
    }

    return max(add_max - add_min, sub_max - sub_min);
}
