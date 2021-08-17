vector<int> Solution::repeatedNumber(const vector<int> &A) {

       long long sum {0};
       long long squareSum {0};
       long long temp {0};

       for (int i {0}; i<A.size(); i++)
       {
           temp = V[i];
           sum += temp;
           sum -= i + 1;
           squareSum += temp * temp;
           squareSum -= ((long long)(i + 1) * (long long)(i + 1));
       }

       squareSum /= sum;

       int A {(int) ((sum + squareSum) / 2)};
       int B {squareSum - A};

       vector<int> ans;
       ans.push_back(A);
       ans.push_back(B);
       return ans;
}
