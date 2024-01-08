class Solution {
public:
    int firstUniqChar(string s) {

        queue<int>q;
        map<char, int>m;

        for(auto i : s){
            m[i]++;
            q.push(i);
        }

        int i=0;
        while(!q.empty()){
            if(m[q.front()]==1)  return i;

            q.pop();
            i++;
        }

        return -1;
        
    }
};
