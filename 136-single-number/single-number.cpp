class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        int ans;
        // now we will bw checking the number appers once 
        for(auto x : map){
            if(x.second == 1){
                ans = x.first;
                break;
            } 
        }
        return ans ;
    }
};