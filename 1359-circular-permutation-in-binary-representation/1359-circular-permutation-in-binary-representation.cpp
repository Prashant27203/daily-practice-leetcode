class Solution {
public:
    vector<int> circularPermutation(int n, int start) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int p = 1<<n;
        vector<int>sol;
        for(int i=0;i<p;i++)
        {
            sol.push_back(i^(i/2));
        }
        bool flag = false;
        vector<int>temp;
        vector<int>ans;
        for(auto it:sol)
        {
            if(it==start){
                flag = true;
            }
            if(flag==true)
            {
                ans.push_back(it);
            }
            else{
                temp.push_back(it);
            }
        }
        for(auto it:temp)
        {
            ans.emplace_back(it);
        }
        return ans;
}
};