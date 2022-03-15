class Solution {
public:
    string minRemoveToMakeValid(string s) 
    {
       // vector<int> ignoredCandidates;
       // stack<char> st;
       // for(int i=0;i<s.size();i++)
       // {
       //     if(s[i]=='(' || s[i]==')')
       //     {
       //         if(s.empty())
       //             ignoredCandidates.push_back(i);
       //         else if(s[i]==')' && st.top()!='(')
       //             ignoredCandidates.push_back(i);
       //         st.push(s[i]);
       //     }
       // }
       // string ans;
       // int k=0;
       // for(int i=0;i<s.size();i++)
       // {
       //     if(i==ignoredCandidates[k])
       //     {
       //         k++;
       //         continue;
       //     }
       //     ans+=s[i];
       // }
       // return ans;
            int n= s.size();
        stack<int> st;

        //just keep invalid brackets index and popping valid out of stack.
        for(int i=n-1;i>=0;i--){
            if(s[i]==')') st.push(i);
            if(s[i]=='(')
                (st.size() && s[st.top()]==')')? st.pop(): st.push(i);        
        }

        //reconstruct a new string by ignoring all brackets wrt their position present in stack, and keep popping them
        string res="";
        for(int i=0;i<n;i++){ 
            if(st.size() and st.top()==i) st.pop();   
            else res+= s[i];
        }

        return res;
    }
};