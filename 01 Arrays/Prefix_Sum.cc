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

void Prefix(int arr[], int n)
{
    int Prefix_Arr[100] = {0};
    Prefix_Arr[0] = arr[0];
    for(int i = 1; i < n; i++)
    {
            Prefix_Arr[i] = Prefix_Arr[i-1] + arr[i];
    }
    int ans = 0;
	cout << "Sub_Arr is: " << endl;
	for(int i = 0; i < n; i++)
	{
        int sum = 0;
		for(int j = i; j < n; j++)
        {
            if(i == 0)
            {
                sum = Prefix_Arr[j];
            }
            else
            {
                sum = Prefix_Arr[j] - Prefix_Arr[i-1];
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
     Prefix(arr,n);
     
    return 0;
}

/*

output.txt
 
Brute Force :O(n^2)  

Enter the Size of the Array :
1 2 3 4 5 6 7 8 9 10 Sub_Arr is: 
Max Sum Of the Sub Array  Is : 55

*/