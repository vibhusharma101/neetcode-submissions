class Solution {
public:
    long long maximumSumScore(vector<int>& nums) {
        long long fAns = nums[0];
        long long lAns =nums[nums.size()-1];
        long long curr =nums[0];

        for(int i =1;i<nums.size();i++){
            curr+=nums[i];
            fAns = std::max(curr,fAns);
        }

        curr = nums[nums.size()-1];
        for(int i = nums.size()-2;i>0;i--){
            curr+=nums[i];
            lAns  = std::max(curr,lAns);
        }
        return std::max(fAns,lAns);
    }
};
