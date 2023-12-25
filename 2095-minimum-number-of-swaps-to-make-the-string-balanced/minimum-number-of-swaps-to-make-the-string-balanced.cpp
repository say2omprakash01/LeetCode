class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
        for(auto it:s){
            if(it==']' && !st.empty()){
                st.pop();
            }
            else{
                st.push(it);
            }
        }
        return ceil(st.size()/2);
    }
};