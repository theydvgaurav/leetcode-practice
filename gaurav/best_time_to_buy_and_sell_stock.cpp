//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0, cp=prices[0];
        for(auto it: prices){
            if(it>=cp){
                res = max(res,it-cp); 
            }
            cp = min(cp,it);
        }
        return res;
    }
};