class Solution {
public:
    string predictPartyVictory(string s) {
        int n = s.length();
        queue<int>q;// the main queue
        queue<int>r; // to store the rth index
        queue<int>d; // to maintain the dth index
        for(int i=0;i<n;i++){
            q.push(i);
            if(s[i]=='R') r.push(i);
            else d.push(i);
        }
        while (q.size()>1){
            // to pop out the X from the qth queue
            if(s[q.front()]=='X') q.pop();
            else if(s[q.front()]=='R'){
                // announce the victory
                if(d.size()==0) return "Radiant";
                else{
                    //element present in the d
                    s[d.front()]='X';
                    d.pop();
                    int x = r.front();
                    r.pop(); // traversal from the rth index queue
                    r.push(x);
                    q.push(q.front());
                    q.pop(); // traversal from the main index queue
                }
            }
              else if(s[q.front()]=='D'){
                // announce the victory
                if(r.size()==0) return "Dire";
                else{
                    //element present in the d
                    s[r.front()]=' X';
                    r.pop();
                    int x = d.front();
                    d.pop(); // traversal from the rth index queue
                    d.push(x);
                    q.push(q.front());
                    q.pop(); // traversal from the main index queue
                }
            }
        }
        if(s[q.front()]=='R') return "Radiant";
        else return  "Dire";

    }
};