class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    int n=nums.size();
    vector<int> ans(n);
    int j=0;
    
    for(int i=0 ; i<n ; i++){
        ans[j]=nums[i] * nums[i];
        j++;
    }
     sort(ans.begin() , ans.end());
    return ans;
    }
};