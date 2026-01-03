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

void Inbuilt_Reverse(int arr[],int n)
{
   reverse(arr,arr + n);
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
    Inbuilt_Reverse(arr,n);
    cout<<endl<<"Sorted Array : "<<endl;
    for(int i = 0; i < n; i++)
    {
    	cout<<arr[i]<<" ";
    }
    return 0;
}

/*

output: 

Enter the elements of the Array :
5 4 3 2 1 6 7 
Sorted Array : 
7 6 1 2 3 4 5 


*/