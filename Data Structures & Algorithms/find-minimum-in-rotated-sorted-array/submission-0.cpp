class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int ans=INT_MAX;
        while(lo<=hi){
            int mid=(hi+lo)/2;
            //left sorted?
            if(nums[lo]<=nums[mid]){
                ans=min(ans,nums[lo]);
                lo=mid+1;
            }
            //right sorted
            else{
                ans=min(ans,nums[mid]);
                hi=mid-1;
            }
        }
        return ans;
    }
};
