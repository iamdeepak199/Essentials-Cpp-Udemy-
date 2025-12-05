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
    int ans = -1;
    vector<int>arr;
    int n,val;
    cout << "Enter the Size of the Vector :"<<endl;
    cin >> n;
    cout << endl <<"Enter A value For Lower Bound :"<<endl;
    cin >> val;
    for (int i = 0; i < n; ++i)
     {
     	arr.push_back(i);
     } 
     for (int i = 0; i < n; ++i)
     {
     	cout << arr[i] <<" ";
     }

     int left = 0, right = n - 1;
     while(left <= right)
     {
        int mid = (left + right)/2;
        if(arr[mid] < val)
        {
            ans = arr[mid];
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
     }
     cout<<endl<<"Lower Bound is : "<< ans;
     return 0;
}

/*

output.txt
 
Enter the Size of the Vector :

Enter A value For Lower Bound :
0 1 2 3 4 5 6 7 8 9 
Lower Bound is : 4


*/