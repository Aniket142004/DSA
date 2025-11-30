class Solution {
public:
int reverse(int num){
    int r=0;
    while(num>0){
       int  n= num%10;
        r=r*10+n;
        num= num/10;
       }
       return r;
}
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        // approach : reverse the number and insert the reverse num and original
        // num in the sets and then return the size of set
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            int rev = reverse(nums[i]);
            s.insert(nums[i]);
              s.insert(rev);

        }
        return s.size(); // always returns the unique elemnets 
    }
};