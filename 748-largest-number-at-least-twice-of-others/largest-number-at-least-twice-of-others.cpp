class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int max= INT_MIN;
        int idx =-1;
        for(int i=0;i<n;i++){
            if(max<nums[i]){
                max= nums[i];
                idx =i;
            }
        }
        for(int i=0;i<n;i++){
            if (i==idx) continue;
            else if(nums[i]*2 >max){
                return -1;
                break;
            }
        }
        return idx;
    }
};