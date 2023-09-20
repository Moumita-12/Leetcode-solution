class Solution {
public:
    bool isValid(string s) {
        stack <char> stk;
        int i;
        for(i=0;i<s.size();i++){
            if(s[i]== '(' ||  s[i]=='{' || s[i] == '['){
                stk.push(s[i]);

            }
         else if(!stk.empty() == 0)
            {
                stk.push(s[i]);
            }
            else if(s[i]==')' && stk.top() == '(')
            {
                stk.pop();
            }
            else if(s[i]=='}' && stk.top() == '{')
            {
                stk.pop();
            }
            else if(s[i]==']' && stk.top() == '[')
            {
                stk.pop();
            }
            else
            {
                return false;
            }
        }

        return stk.empty();
        
    }
    
};
