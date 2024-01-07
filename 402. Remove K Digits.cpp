class Solution {
public:
    string removeKdigits(string num, int k) {
      
      stack<char>st;
      
      for(char i : num){
          while(!st.empty() && st.top()>i && k>0){
              st.pop();
              k--;
          }
         if(!st.empty() || i != '0') st.push(i);
      }

       while(!st.empty() && k>0){
                st.pop();
                k--;
            }

      string ans;
      while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
       }

    reverse(ans.begin(),ans.end());
   if(ans.length()==0) return "0";

    return ans;
        
    }
};
