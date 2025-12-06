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

void Sub_Arr(int *arr, int n)
{
    int ans = 0;
	cout << "Sub_Arr is: " << endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
        {
            int sum = 0;
            for(int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            ans  = max(ans,sum);
        }
	}
    cout<<"Max Sum Of the Sub Array  Is : "<<ans;
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
     Sub_Arr(arr,n);
     
    return 0;
}

/*

output.txt
 
Brute Force :O(n^3)  

Enter the Size of the Array :
1 2 3 4 5 6 7 8 9 10 Sub_Arr is: 
Max Sum Of the Sub Array  Is : 55

*/