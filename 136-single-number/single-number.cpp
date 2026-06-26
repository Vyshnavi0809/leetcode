class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int , int>freq;
        int single=0;
        int i;
        for(i=0 ; i<n ; i++){
            freq[nums[i]]++;
        }
        for(i=0 ; i<n ; i++){
         if(freq[nums[i]]==1){
             single=nums[i];
            }
        }
        return single;
    }
};