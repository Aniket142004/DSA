class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){ 
            m[arr[i]]++; // count all the frequency and the value along with it
        }
        // applying map to get the unique occurances 
          unordered_set<int>s;
        for(auto x:m){
            int num = x.second;
            // now check the element is present or not 
            if(s.find(num)!= s.end()){ // if found 
                return false;
            }
            else{
                s.insert(num);
            }
        }
        return true;

    }
};