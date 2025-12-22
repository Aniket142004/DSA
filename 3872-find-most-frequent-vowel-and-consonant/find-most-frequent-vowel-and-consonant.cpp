class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mv;
        unordered_map<char,int>mc;
       for(char x :s){
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){ // characters can not  be comapred withdouble quote
        mv[x]++;
        }
        else{
            mc[x]++;
        }
       }
        int maximumv=0;
        int maximumc=0;
        for (auto i: mv){
            
             maximumv= max(maximumv,i.second);
        }
         for (auto i: mc){
            int ans = i.second;
            maximumc= max(maximumc,ans);
        }
        return maximumc+maximumv;

      
       
       
    }
};