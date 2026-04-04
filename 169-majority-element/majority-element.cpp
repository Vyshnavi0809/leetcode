class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = -1;

        // Step 1: Find candidate
        for(int num : nums) {
            if(count == 0) {
                candidate = num;
            }

            if(num == candidate) count++;
            else count--;
        }

        // Step 2: Verify candidate
        count = 0;
        for(int num : nums) {
            if(num == candidate) count++;
        }

        if(count > nums.size()/2) return candidate;

        return -1; // if no majority
    }
};