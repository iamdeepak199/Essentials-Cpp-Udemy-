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

int main() 
{
    fastio(true);
    stack<string>books;

    books.push("C++");
    books.push("Java");
    books.push("C");
    books.push("Javascript");
    books.push("Python");

    while(!books.empty()){
    	cout<<books.top()<<" "<<endl;
    	books.pop();
    }
    return 0;
}