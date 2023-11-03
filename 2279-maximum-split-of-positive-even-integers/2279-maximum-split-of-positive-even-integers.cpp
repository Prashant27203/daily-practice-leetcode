class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        if(finalSum%2!=0) return {};
        long long  currsum = 0;long long  i=2;
        vector<long long int>ans;
        while(i+currsum<=finalSum)
        {
            ans.emplace_back(i);
            currsum+=i;
            i+=2;
            
        }
        ans[ans.size()-1]+=finalSum-currsum;
        return ans;
    }
};