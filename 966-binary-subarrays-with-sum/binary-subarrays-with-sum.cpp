class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int currsum=0;
        int count=0;
        unordered_map<int , int>mp;
        mp[0]=1;
        for(int r=0;r<n; r++){
            currsum += nums[r];
           if(mp.find(currsum-goal)!=mp.end()){
            count += mp[currsum-goal];
           }
           mp[currsum]++;
        }
    
    return count;
    }
};