class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int currsum=0;
        int count=0;
        unordered_map<int,int>v;
        v[0]=1;
        for(int i=0 ; i<n ; i++){
            currsum += nums[i];
            if(v.find(currsum-k)!=v.end()){
                count+=v[currsum-k];
                    }
                    v[currsum]++;
                  
        }
          return count;
    }
};