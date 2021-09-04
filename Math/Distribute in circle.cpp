int Solution::solve(int A, int B, int C) {

    if((A % B) <= B - (C % B) + 1) return (C % B) + (A % B) - 1;
    return (A % B) - (B - (C % B) + 1);


}
