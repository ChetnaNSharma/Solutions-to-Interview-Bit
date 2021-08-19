int Solution::solve(vector<int> &A, int B) {
     if(B == 0) return -1;

     int n {A.size()};
     int i {0};
     const int bkw{B+1};
     const int fwd{B-1};
     int point_ahead {B+1};
     int point_back {0};
     int ans {0};

    while(point_back <= n)
    {
        int flag {0};
        for(int j = point_ahead; j > point_back; j--)
        {
            if(A[j] == 1)
            {
                flag = 1;
                ans++;
                point_back = j + fwd;
                point_ahead = point_back + bkw;
                break;
            }
        }
        if(flag == 0) return -1;
    }

    return ans;

}
