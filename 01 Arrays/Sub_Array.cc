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
	cout << "Sub_Arr is: " << endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
        {
            for(int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout<<endl;
        }
	}
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

Enter the Size of the Array :
1 2 3 4 5 Sub_Arr is: 

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

2 
2 3 
2 3 4 
2 3 4 5 

3 
3 4 
3 4 5 

4 
4 5 

5 


*/