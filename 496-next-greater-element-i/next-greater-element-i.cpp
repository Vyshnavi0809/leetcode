class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> mp;

        // Step 1: Build Next Greater Element map using nums2
        for (int i = nums2.size() - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            mp[nums2[i]] = st.empty() ? -1 : st.top();
            st.push(nums2[i]);
        }
        // Step 2: Build answer for nums1
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            if (mp.find(nums1[i]) != mp.end()) {
                ans.push_back(mp[nums1[i]]);
            }
        }

        return ans;
    }
};