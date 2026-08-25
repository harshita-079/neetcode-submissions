class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;
        vector<int>ans(2);
        unordered_map<int,int>mpp;
        while(i<n){
            int x=target-nums[i];
            if(mpp.find(x)!=mpp.end()){
                ans[1]=i;
                ans[0]=mpp[x];
                break;
            }
            mpp[nums[i]]=i;
            i++;

        }
        return ans;
    }
};
