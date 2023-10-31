class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int x=pref[0],y=0;
        for(int i =1;i<pref.size();i++)
        {
            y=pref[i];
            pref[i]=pref[i]^x;
            x=y;

        }
        return pref;
    }
};