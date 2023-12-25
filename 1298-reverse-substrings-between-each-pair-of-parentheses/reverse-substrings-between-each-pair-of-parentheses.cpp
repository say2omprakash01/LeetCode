class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st ; 
        int n = s.size() ; 
        for(int i=0; i<n; i++){
            if(s[i]=='(') st.push(i) ; 
            else if(s[i]==')'){
                int e = st.top() ; 
                st.pop() ; 
                reverse(s.begin()+e+1 , s.begin()+i) ; 
            }
        }
        string ans ; 
        for(int i = 0 ; i<n ; i++){
            if(s[i]!='(' and s[i]!=')') ans+=s[i] ; 
        }
        return ans ; 
    }
};