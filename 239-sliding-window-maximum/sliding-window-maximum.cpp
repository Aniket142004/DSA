class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ngi(n, n);  // Initialize all to n
        stack<int> st;

        // Build Next Greater Index (NGI)
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }
            if (!st.empty()) {
                ngi[i] = st.top();
            }
            st.push(i);
        }

        vector<int> ans;
        int j = 0;

        // Compute maximum in each window
        for (int i = 0; i <= n - k; i++) {
            if (j < i) j = i;  // Move j to start of window if it's behind
            while (ngi[j] < i + k) {
                j = ngi[j];  // Jump to next greater index within the window
            }
            ans.push_back(nums[j]);
        }

        return ans;
    }
};
