int Solution::solve(vector<int> &A) {

int n = A.size();
sort(A.begin(), A.end());
int sum = A[0] + A[n-1];
return sum;
}
