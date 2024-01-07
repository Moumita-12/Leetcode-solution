class Solution {
public:
 int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int ans=0,i=0;
        int n = heights.size();

        while(i<=n){
            while(!st.empty() and (i == heights.size() || heights[st.top()]>heights[i])){
                int h = heights[st.top()];
                st.pop();

                if(st.empty()){
                    ans = max(ans, h*i);
                }

                else{
                    int len = i - st.top() - 1;
                    ans = max(ans, h*len);
                }
            }

            st.push(i);
            i++;
        }

        return ans;
    }


};
