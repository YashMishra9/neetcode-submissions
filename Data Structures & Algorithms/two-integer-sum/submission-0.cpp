class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int needed=target-a;
            if(mpp.find(needed)!=mpp.end()){
                return {mpp[needed],i};
            }
            mpp[a]=i;
        }
        return {-1,-1};
    }
};
