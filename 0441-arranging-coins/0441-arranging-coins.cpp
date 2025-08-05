class Solution {
public:
    int arrangeCoins(int n) {
        long long k=n;
        return sqrt(2*k+0.25)-0.5;
    }
};