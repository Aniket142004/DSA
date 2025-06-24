class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> ans(n); // Allocate 'n' size to avoid out-of-bounds access
        int lidx = 0;       // Points to the next position for elements < pivot
        int ridx = n - 1;   // Points to the next position for elements > pivot (from end)

        // First, collect < pivot and > pivot elements in correct places
        for (int i = 0; i < n; i++) {
            if (nums[i] < pivot) {
                ans[lidx++] = nums[i];
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] > pivot) {
                ans[ridx--] = nums[i];
            }
        }

        // Fill the middle part with pivot
        for (int i = lidx; i <= ridx; i++) {
            ans[i] = pivot;
        }

        return ans;
    }
};
