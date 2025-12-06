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
    vector<int>arr;
    int n;
    cout << "Enter the Size of the Vector :"<<endl;
    cin >> n;
    for (int i = 0; i < n; ++i)
     {
     	arr.push_back(i);
     } 
     for (int i = 0; i < n; ++i)
     {
     	cout << arr[i] <<" ";
     }
     cout << endl<<"Before pop_back()"<<endl;
     arr.pop_back();
     arr.pop_back();
     for (int i = 0; i < arr.size(); ++i)
     {
        cout << arr[i] <<" ";
     }
     cout << endl<<"After pop_back()"<<endl;
    return 0;
}

/*

output.txt
 
Enter the Size of the Vector :
0 1 2 3 4 
Before pop_back()
0 1 2 
After pop_back()


*/