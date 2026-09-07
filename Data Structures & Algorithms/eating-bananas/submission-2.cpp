class Solution {
public:
    int countHours(int k,vector<int>& piles){
        int hour=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]<=k)hour++;
            else hour+=(piles[i]%k==0 ? piles[i]/k : (piles[i]/k )+1);
        }
        return hour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int lo=1;
        int hi=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(countHours(mid,piles)<=h){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};
