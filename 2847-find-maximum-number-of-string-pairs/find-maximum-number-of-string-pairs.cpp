class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int n = arr.size();
        // inserting the old strings in sets 
        unordered_set<string>s;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        // now firstly reverse the element 
        // check with the present one 
        // if present remove the original and count ++;
        int count =0;
        for(int i=0;i<n;i++){
            string rev = arr[i];
            reverse(rev.begin(),rev.end());
            if(arr[i]==rev)continue;
            if(s.find(rev)!=s.end()){
                s.erase(arr[i]);
                count++;
            }
        }
        return count ;
    }
};