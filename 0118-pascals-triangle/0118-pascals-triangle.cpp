class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v{{1}};
        for(int i=0;i<numRows-1;i++){
            vector<int>vv{1};
            int len = v.size()-1;
            for(int j=0;j<v[len].size()-1;j++){
                vv.push_back(v[len][j] + v[len][j+1]);
            }
            vv.push_back(1);
            v.push_back(vv);
        }
        return v;
    }
};