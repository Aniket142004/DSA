class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
       int n = nums.size();
         vector<int>e;
           vector<int>o;
             vector<int>v;

        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                e.push_back(nums[i]);
            }
            else{
                o.push_back(nums[i]);
            }
        }
        v=e;
        for(int i=0;i<o.size();i++){
            v.push_back(o[i]);
        }
        return v;

    }
};