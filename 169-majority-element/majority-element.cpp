class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>s;
        int n = nums.size();
        for(int i=0;i<n;i++){
            s[nums[i]]++;
        }
       for(auto x: s){
        if(x.second>n/2) return x.first;
       }
       return -1;
    }
};