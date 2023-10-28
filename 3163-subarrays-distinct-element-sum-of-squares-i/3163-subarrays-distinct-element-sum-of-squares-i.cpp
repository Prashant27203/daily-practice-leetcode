class Solution {
public:
    int sumCounts(vector<int>& nums) {
        long long int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j = i ;j<nums.size();j++){
                set<int>st;
            for(int k = i;k<=j;k++){
                    st.insert(nums[k]);
                }
                sum +=pow(st.size(),2);
            }
        }
        return sum ;
    }
};