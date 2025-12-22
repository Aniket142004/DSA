class Solution {
public:
    int maxDistinct(string s) {
        int n =s.length();
        unordered_map<char,int>m;
        for(auto i:s){
             m[i]++;
        }
        return m.size();
    }
};