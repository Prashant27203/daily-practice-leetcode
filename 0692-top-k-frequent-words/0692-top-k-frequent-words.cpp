class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
       unordered_map<string,int>mp;vector<string>v;
        for(auto it:words){mp[it]++;}
        priority_queue<pair<int,string>,vector<pair<int,string>>,MyComp>pq;
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
            if(pq.size()>k)pq.pop();
        }
        while(!pq.empty())
        {
            v.emplace_back(pq.top().second);
            pq.pop();
        }
        reverse(begin(v),end(v));
        return v;
    }
    private:
    struct MyComp{
        bool operator()(const pair<int,string>&a,const pair<int,string>&b)
        {
            if(a.first!=b.first){return a.first>b.first ;}
            else{return a.second<b.second ;}
        }
    };
};