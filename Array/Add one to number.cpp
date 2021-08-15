vector<int> Solution::plusOne(vector<int> &A) {

    while(A[0] == 0 && A.size() != 1) A.erase(A.begin());
    bool carry = false;
    int i {0};


    if(A[A.size()-1] <= 8) A[A.size()-1]++;
    else
    {
      A[A.size()-1] = 0;
      carry = true;
    }

    if(carry)
    {
    for(i = A.size()-2; i >= 0; i--)
    {
        if(A[i] <= 8 && carry)
        {
            A[i] = A[i] + 1;
            carry = false;
            break;
        }
        else if(A[i] == 9 && carry)
        {
            A[i] = 0;
            carry = true;
        }
    }
    }

    if(carry) A.insert(A.begin(),1);
    return A;
}
