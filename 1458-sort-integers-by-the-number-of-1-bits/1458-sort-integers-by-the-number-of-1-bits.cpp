class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) 
    {
        pair<int,int> a[505];
        int cnt=0;

        int n=arr.size();
        for(int i= 0;i<n;i++)
        {
            cnt=__builtin_popcount(arr[i]);
            a[i]={cnt,arr[i]};
        }
        sort(a,a+n);
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(a[i].second);
        }
        return ans;
    }
};