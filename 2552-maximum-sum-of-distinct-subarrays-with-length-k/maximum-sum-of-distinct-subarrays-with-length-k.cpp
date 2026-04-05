class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int , int> freq;
        long long sum=0, maxsum=0;
        int l=0;
        int r;
        for(r=0; r<n ; r++){
            sum += nums[r];
            freq[nums[r]]++;
           if(r-l+1>k){
            freq[nums[l]]--;
            if(freq[nums[l]]==0){
                freq.erase(nums[l]);
            }
            sum-=nums[l];
            l++;
           }
            if(r-l+1 ==k && freq.size()==k){
            maxsum = max(sum , maxsum);
        }
          
        }
        
        
        return maxsum;
    }
};