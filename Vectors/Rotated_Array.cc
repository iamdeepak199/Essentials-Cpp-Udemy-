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
void Rotated_Array(vector<int>& arr, int k,int n)
{
    vector<int>ans;
    k = k % n;


    for(int i = n - k; i < n ; i++)
    {
        ans.push_back(arr[i]);
    }
    for(int i = 0; i < n - k; i++)
    {
        ans.push_back(arr[i]);
    }
    cout<<endl<<"K- Rotated_Array :"<<endl;
    for (int i = 0; i < ans.size(); ++i)
    {
        cout<<ans[i] <<" ";
    }
}
int main() 
{
    fastio(true);
    vector<int>arr;
    int n,k;
    cout << "Enter the Size of the Vector :"<<endl;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        arr.push_back(i);
     cout << "Original Array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
     Rotated_Array(arr,k,n);
    return 0;
}

/*

output.txt
 
Enter the Size of the Vector :
Original Array:
0 1 2 3 4 5 6 
K- Rotated_Array :
5 6 0 1 2 3 4 

*/