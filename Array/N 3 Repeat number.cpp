int Solution::repeatedNumber(const vector<int> &A) {
   int n=A.size();
    int element1=INT_MAX,element2=INT_MAX;
    int count1=0,count2=0,i;
    for(i=0;i<n;i++)
    {
        if(count1>0 && A[i]==element1)
        {
            count1+=1;
        }
        else if(count2>0 && A[i]==element2)
        {
            count2+=1;
        }
        else if(count1==0)
        {
            element1=A[i];
            count1=1;
        }
        else if(count2==0)
        {
            element2=A[i];
            count2=1;
        }
        else
        {
            count1--;
            count2--;
        }
    }
    if(count1==0 && count2==0)
        return -1;
        count1 = 0;
        count2= 0;
   for(int i=0 ; i<n ; i++)
   {
       if(A[i] == element1) count1++;
       else if(A[i] == element2) count2++;
   }
   if(count1 > n/3) return element1;
   else if (count2 > n/3) return element2;
   else return -1;
}
