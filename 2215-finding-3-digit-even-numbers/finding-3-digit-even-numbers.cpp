class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
         vector<int>ans;
         int n = digits.size();
         unordered_map<int,int>m;
         // insert all elements in the map
         for(auto x: digits){
            m[x]++;
        }
        for(int i=100;i<999;i+=2){
            int x =i;
            int a=x%10;
            x=x/10;
            int b =x%10;
            x=x/10;
            int c= x%10;
            // now check if the a,b c are present in the map or not 
            if(m.find(a)!=m.end()){

             m[a]--;
            if(m[a]==0)m.erase(a);
             if(m.find(b)!=m.end()){ m[b]--;
            if(m[b]==0)m.erase(b);
             if(m.find(c)!=m.end()) ans.push_back(i);
             m[b]++;
             }
              m[a]++;
            }
        
        } 
        return ans;

    }
};