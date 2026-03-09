#include <bits/stdc++.h>
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
    int size;
    cout<<"Enter the size of the Queue : "<<endl;
    cin>>size;
    queue<int>q;

    for(int i = 0; i < size; i++){
    	int val;
    	cin>>val;
    	q.push(val);
    }

    while(!q.empty()){
    	cout<<q.front()<<" ";
    	q.pop();
    }

    return 0;
}

/*
output:

Enter the size of the Queue : 
1 2 3 4 5 6 7 8 9 10 

*/