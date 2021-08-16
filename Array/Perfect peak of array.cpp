int Solution::perfectPeak(vector<int> &A) {

int n {A.size()};
vector <int> left_max(n);
vector <int> right_min(n);
int highest {A[0]};
int lowest {A[n-1]};

for(int i {0}; i<n; i++)
{
    left_max[i] = max(highest,A[i]);
    highest = left_max[i];
}
for(int i {n-1}; i >= 0; i--)
{
    right_min[i] = min(lowest,A[i]);
    lowest = right_min[i];
}
for(int i {1}; i<n-1; i++)
{
    if(left_max[i-1]<A[i] && right_min[i+1]>A[i]) return 1;
}
return 0;
}
