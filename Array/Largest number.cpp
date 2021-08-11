int my_comp(string x, string y)
{
    string xy = x.append(y);
    string yx = y.append(x);
    return xy.compare(yx) > 0 ? 1:0;
}
string Solution::largestNumber(const vector<int> &A) {

    vector<string> B;
    int i {0};
    string ans = "";

    for(i = 0; i< A.size(); i++)
    {
        B.push_back(to_string(A[i]));
    }
    sort(B.begin(), B.end(), my_comp);
    for(i = 0; i<A.size(); i++)
    {
        ans += B[i];
    }
    i = 0;
    while(ans[i] == '0') i++;
    if(i == A.size()) ans = "0";
    return ans;
}
