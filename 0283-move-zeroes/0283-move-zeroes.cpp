class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>v;
        int z=0;
        for(auto it:nums){
            if(it!=0)v.push_back(it);
            else z++;
        }
        for(int i=0;i<z;i++) v.push_back(0);
        nums=v;
    }
};