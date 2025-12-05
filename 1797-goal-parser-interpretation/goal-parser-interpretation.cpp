class Solution {
public:
    string interpret(string s) {
        int n = s.length();
        string res="";
        int i=0;
        while(i<n){
            if(s[i]=='G'){
                res+='G';
                i++;
            }
            else if (i + 1 < n && s[i] == '(' && s[i+1] == ')') {
                res += 'o';
                i += 2; // Advance by 2
            }
            // Case 3: "(al)" -> "al"
            else if (i + 3 < n && s[i] == '(' && s[i+1] == 'a' && s[i+2] == 'l' && s[i+3] == ')') {
                res += "al";
                i += 4; // Advance by 4
            }
        }
        return res;
        
    }
};