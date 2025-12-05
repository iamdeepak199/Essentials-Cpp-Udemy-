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

void Paired_Arr(int *arr, int n)
{
	cout << "Paired_Arr is: " << endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
        {
            cout <<"("<<arr[i]<<"->" <<arr[j]<<")" <<" ";
        }
        cout<<endl;
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
     Paired_Arr(arr,n);
     
    return 0;
}

/*

output.txt

Enter the Size of the Array :
1 2 3 4 Paired_Arr is: 
(1->2) (1->3) (1->4) 
(2->3) (2->4) 
(3->4) 

*/