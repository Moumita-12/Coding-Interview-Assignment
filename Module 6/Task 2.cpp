string removeDuplicates(string s) {
  
    stack<char>st;
    
    for(char i : s){ 
        
        if(!st.empty() && st.top()==i){
            st.pop();
        }
        else  st.push(i);
    }


    string ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(),ans.end());
  
    return ans;
        
    }

//Time complexiety = O(n)
// space complexiety = O(n) ,  n= size of string
