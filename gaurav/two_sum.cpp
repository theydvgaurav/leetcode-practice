// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> res;
        for(int i=0; i < nums.size(); i++){
            if(mp[target-nums[i]]){
                res.push_back(i);
                res.push_back(mp[target-nums[i]]-1);
                return res;
            }
            mp[nums[i]] = i+1;
        }
        return res;
    }
};