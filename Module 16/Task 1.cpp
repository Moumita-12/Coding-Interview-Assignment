vector<int> topKFrequent(vector<int>& nums, int k) 
{
    unordered_map<int,int>hash;
    for(auto l:nums)
    hash[l]++;
    priority_queue<pair<int,int>>pq;
    for(auto l:hash)
    pq.push(make_pair(l.second,l.first));
    vector<int>ans;
    for(int i=0;i<k;i++)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }
     return ans;
}

//time = O(nlogn)
//Space = O(n)
