class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        mp[0]=1;
        int n=nums.size();
        int currsum=0;
        int count=0;
        
        for(int i=0 ; i<n ; i++){
            currsum += nums[i];
        
        if(mp.find(currsum-k)!=mp.end()){
            count +=mp[currsum-k];
            
        }
        mp[currsum]++;
        }
        return count;
    }
};