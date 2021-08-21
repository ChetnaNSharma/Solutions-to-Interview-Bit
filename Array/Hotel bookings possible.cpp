bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {

     vector<pair<int, int>> v;
    int n {arrive.size()};
    assert(arrive.size() == depart.size());

    for(int i {0}; i<n; i++)
    {
        v.push_back(make_pair(arrive[i], 1));
        v.push_back(make_pair(depart[i], 0));
    }
    sort(v.begin(), v.end());

    int count {0};
    int ans {0};

    for(int i {0}; i<v.size(); i++)
    {
        if(v[i].second == 1)
        {
            count++;
            ans = max(ans,count);
        }
        else count--;
    }
    if(ans>K) return 0;
    return 1;


}
