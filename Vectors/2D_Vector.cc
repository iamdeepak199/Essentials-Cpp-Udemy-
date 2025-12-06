#include <bits/stdc++.h>
#include<vector>
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
    vector<vector<int>>arr = {
        {1,2,3,4},
        {5,6,7},
        {8,9,10,11,12},
        {13,14}
    };

    cout << "2D-Vector :"<<endl;
    
    for (int i = 0; i < arr.size(); ++i)
    {
     	for (int j : arr[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout << endl<<"2D-Vector : "<<endl;
    return 0;
}

/*

output.txt
 
2D-Vector :
1 2 3 4 
5 6 7 
8 9 10 11 12 
13 14 

*/