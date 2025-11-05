class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // using deque
        if(k==1) return nums;
        vector<int>v;
        int n =nums.size();
        deque<int>dq;// decreasing order arrangement
        for(int i=0;i<n;i++){
        while(dq.size()>0 && nums[dq.back()]<nums[i]) dq.pop_back();
        dq.push_back(i);// psushing the index 
        // now to check the front index is belongs to that tesing window or not 
        int j= i-k+1;
        while(dq.front()<j) dq.pop_front();
        // for every iteration in the last element of the window
        if(i>=k-1) v.push_back(nums[dq.front()]);
        }
        return v ;

    }
};