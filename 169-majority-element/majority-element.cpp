class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majority=0;
        unordered_map<int, int> freq;
        for (int i=0 ;i<n ; i++) {
            freq[nums[i]]++;
            if (freq[nums[i]] > n / 2) {
            majority=nums[i];
        }
        }
        return majority;
    }
};