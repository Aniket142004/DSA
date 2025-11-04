class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        // push all the students data to the queue 
        queue<int>q;
        for(int i=0;i<n;i++){
            q.push(students[i]);
            
        }
        int i=0;
        int count =0;
        while(q.size()>0 && count!= q.size()){
            if (q.front()==sandwiches[i]){ // when the matches 
                count =0; //VVIMP
                q.pop();
                i++;
            }
            else{
                count ++;
                q.push(q.front());
                q.pop();
            }
        }
        return q.size();
        
    }
};