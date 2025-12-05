class Solution {
public:
    string defangIPaddr(string str) {
        int n = str.length();
        string reasult="";
        for(int i=0;i<n;i++){
            char ch =str[i];
            if(ch=='.'){
                reasult+="[.]";
            }
            else{
                reasult+=ch;
            }
        }
        return reasult;
    }
};