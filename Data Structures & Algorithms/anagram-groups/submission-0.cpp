class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<n;i++){
            string key=strs[i];
            sort(key.begin(),key.end());
            if(mp.find(key)!=mp.end()){
                mp[key].push_back(strs[i]);
            }
            else mp[key].push_back(strs[i]);
        }
        for(auto item:mp){
            vector<string>v;
            v=item.second;
            ans.push_back(v);
        }
        return ans;
    }
};
