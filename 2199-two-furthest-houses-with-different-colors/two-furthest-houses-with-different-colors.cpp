class Solution {
public:
    int maxDistance(vector<int>& color) {
        int n=color.size();
        int ans=0;
        for(int r=n-1 ; r>=0 ; r--){
            if(color[r]!=color[0]){
                ans=r;
                break;
            }
        }
        for(int i=0 ; i<n ;i++){
            if(color[i]!=color[n-1]){
                ans = max(ans , n-1-i);
                break;
            }
        }
      
       return ans;
    }
};