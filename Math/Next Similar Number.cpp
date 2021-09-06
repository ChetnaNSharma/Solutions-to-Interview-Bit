string Solution::solve(string A) {

    int n = A.length();
    if(n == 1) return "-1";
    int i = 0;
    int switch_pos_1 = 0;
    int digit_1 = 0;

    for(int i = n-1; i > 0; i--)
    {
        if(A[i-1] < A[i])
        {
            switch_pos_1 = i-1;
            digit_1 = A[i-1];
            break;
        }
        if(i-1 == 0) return "-1";
    }

    sort(A.begin() + switch_pos_1 + 1, A.end());

    for(i = switch_pos_1 + 1; i < n; i++)
    {
        if(A[i] > digit_1)
        {
            swap(A[i], A[switch_pos_1]);
            break;
        }
    }

    return A;
}
