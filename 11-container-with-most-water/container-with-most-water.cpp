class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int i=0;
        int j=n-1;
        int  currwater , maxwater = 0;
        while(i<j){
            int wt = j-i;
            int ht=min(height[i] , height[j]);
            currwater = ht *wt;
            if(height[i]<height[j]){
                i++;
            }
                else{
                j--;
              
            }
              maxwater = max(currwater , maxwater);

        }
    return maxwater;
    }
};