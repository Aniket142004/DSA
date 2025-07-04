class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& arr) {
          int n = arr.size();
       
        vector<int> ans(n,0) ;
        stack<int>st;
      
        st.push(arr[n-1]); // by deafult pushing the last elemnent 
        arr[n-1]=0;
        for(int i=n-2;i>=0;i--){
               int count =0;
            // pop
            while(st.size()>0 && arr[i]>st.top()){
                st.pop();
                count ++;
            }
            if(st.size ()!=0) count ++; // VVIMP
            ans[i]=count ;
            st.push(arr[i]);

        }
        return ans ;


    }
};