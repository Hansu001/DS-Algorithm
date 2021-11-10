#include <bits/stdc++.h>
using namespace std;
int precedence(char c){
      if(c == '^')
        return 3;
    else if(c == '/' || c=='*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    stack<char>st;
	    string res;
	    for(int i=0;i<n;i++){
	        char s;
	        cin>>s;
	        if(s=='('){
	            st.push(s);
	        }
	        else if(s==')'){
	            while(st.top()!='('){
	            res+=st.top();
	            st.pop();}
	            st.pop();
	        }
	        else if(s>='A' && s<='Z'){
	            res+=s;
	        }
	        else{
	            while(!st.empty() && precedence(s)<=precedence(st.top())){
	                res+=st.top();
	                st.pop();
	            }
	            st.push(s);
	        }
	    }
	    while(!st.empty())
	    {
	        res+=st.top();
	        st.pop();
	    }
	    cout<<res<<endl;
	}
	return 0;
}
