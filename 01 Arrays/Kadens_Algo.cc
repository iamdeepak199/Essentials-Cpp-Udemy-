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

void KadensAlgo(int arr[], int n)
{
    int current_sum = 0;
    int maxi = 0;
    for(int i = 0; i < n; i++)
    {
        current_sum += arr[i];
        maxi = max(maxi,current_sum);
         if(current_sum < 0)
            current_sum = 0;
    }
    cout<<"Max Sum Of the Sub Array  Is : "<<maxi;
}

int main() 
{
    fastio(true);
    int n;
    cout << "Enter the Size of the Array :" << endl;
    cin >> n; 
    int arr[n];
    for (int i = 0; i < n; ++i)
     {
     	cin >> arr[i];
     } 
     for (int i = 0; i < n; ++i)
     {
     	cout << arr[i] <<" ";
     }
     cout<<endl;
     KadensAlgo(arr,n);
     
    return 0;
}

/*

output.txt
 
<<<<<<< HEAD
Optimal approach :O(n)  
=======
Brute Force :O(n)  
>>>>>>> cef802166a6a6dd5d5e0bc96cfc4d2c184930329

Enter the Size of the Array :
-2 3 4 -1 5 -12 6 1 3 
Max Sum Of the Sub Array  Is : 11

*/