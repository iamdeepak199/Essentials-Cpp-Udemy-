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

void OutOfMain(int *arr, int n)
{
	cout << "Outside Main : " << endl;
     for (int i = 0; i < n; ++i)
     {
     	cout << arr[i] <<" ";
     }

}

int main() 
{
    fastio(true);
    int n;
    cout << "Enter the Size of the Array :" << endl;
    cin >> n; 
    int arr[n];
    cout << "Inside Main : " << endl;
    for (int i = 0; i < n; ++i)
     {
     	cin >> arr[i];
     } 
     for (int i = 0; i < n; ++i)
     {
     	cout << arr[i] <<" ";
     }
     OutOfMain(arr,n);
     
    return 0;
}

/*

output.txt

Enter the Size of the Array :
Inside Main : 
1 2 3 4 5 Outside Main : 
1 2 3 4 5 

*/