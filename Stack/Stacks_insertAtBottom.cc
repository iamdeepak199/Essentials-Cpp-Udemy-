#include <bits/stdc++.h>
// #include<stack>
using namespace std;

void fastio(bool read = false) 
{
    if(read) 
    {
        #ifndef ONLINE_JUGDE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        freopen("error.txt","w",stderr);
        #endif  
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return;
}
void insertAtBottom(stack<int>&st,int data){
    if(st.empty()){
        st.push(data);
        return;
    }
    int temp = st.top();
    st.pop();

    insertAtBottom(st,data);
    st.push(temp);

}

int main() 
{
    fastio(true);
    stack<int>st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    insertAtBottom(st,5);

    while(!st.empty()){
    	cout<<st.top()<<" "<<endl;
    	st.pop();
    }
    return 0;
}

/*

output :

4 
3 
2 
1 
5 

*/