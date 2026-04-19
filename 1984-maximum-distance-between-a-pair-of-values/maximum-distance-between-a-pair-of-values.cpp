class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        int n=nums1.size();
        int m=nums2.size();
        int dist=0;
        int i=0 , j=0;
      while(i<n && j<m){
              if(nums1[i]<=nums2[j]){
                dist = max(dist , j-i);
                j++;
            }else {
                i++;
            }
    }
            
        
         return dist;
    }
};