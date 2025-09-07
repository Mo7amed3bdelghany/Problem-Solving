class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v;
        int x = 1;
        for (int i=0;i<n/2;i++) {
            v.push_back(x);
            v.push_back(-x);
            x++;
        }
        if(n%2) v.push_back(0);
        return v;
    }
};