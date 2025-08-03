class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=-1, profit=0,idx=0;
        vector<int>v=prices;
        map<int,int>mp;
        sort(v.rbegin(),v.rend());
        for(auto it:v) mp[it]++;
        for(auto it:prices){
            while(mp[v[idx]]==0) idx++; 
            if(it!=v[idx]){
                profit=max(profit,(v[idx]-it));
            }
            mp[it]--;
        }

        return profit;
    }
};