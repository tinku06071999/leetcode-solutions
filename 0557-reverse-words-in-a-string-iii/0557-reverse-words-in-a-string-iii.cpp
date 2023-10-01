class Solution {
public:
    string reverseWords(string s) {
        string ans;
        // s+=' ';
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                while(!st.empty()){
                    ans+=st.top();
                    st.pop();
                }ans+=' ';
            }
            if(s[i]!=' ')st.push(s[i]);
        }
        while(!st.empty()&& st.top() != ' '){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};