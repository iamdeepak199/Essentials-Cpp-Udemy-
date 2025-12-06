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

void Bubble_sort(int arr[],int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - i - 1; j++)
		{
			if(arr[j] > arr[j + 1])
				swap(arr[j],arr[j+1]);
		}
	}
}


int main() 
{
    fastio(true);
    int n;
    cin>>n;
    cout << "Enter the elements of the Array :"<<endl;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
    	cin >> arr[i];
    }
    for (int i = 0; i < n; ++i)
    {
    	cout << arr[i] << " ";
    }
    Bubble_sort(arr,n);
    cout<<endl<<"Sorted Array : "<<endl;
    for(int i = 0; i < n; i++)
    {
    	cout<<arr[i]<<" ";
    }
    return 0;
}