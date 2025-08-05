class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int num=0;
        for(auto it:fruits){
            bool ch=1;
            for(auto &iit:baskets){
                if(it<=iit){
                    iit=-1, ch=0;
                    break;
                }
            }
            if(ch) ++num;
        }
    return num;
    }
};