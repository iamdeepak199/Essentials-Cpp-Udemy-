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

void Reversed_Arr(int *arr, int n)
{
	int left = 0;
	int right = n - 1;
	while(left < right)
	{
		swap(arr[left],arr[right]);
		left++;
		right--;
	} 
	cout << "Reversed_Arr is: " << endl;
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
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
     Reversed_Arr(arr,n);
     
    return 0;
}

/*

output.txt

Enter the Size of the Array :
Inside Main : 
1 2 3 4 5 6 7 8 9 10 
Reversed_Arr is: 
10 9 8 7 6 5 4 3 2 1 

*/