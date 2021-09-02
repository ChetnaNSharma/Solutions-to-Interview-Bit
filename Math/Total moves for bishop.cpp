int Solution::solve(int A, int B) {

    return min(8-B, A-1) + min(8-B, 8-A) + min(8-A, B-1) + min(A-1, B-1);
}
