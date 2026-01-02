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

void Selection_sort(int arr[],int n)
{
    for(int i = 0; i < n - 1; i++){
        int min_indx = arr[i];
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min_indx]){
                min_indx = j;
            }
        }
        swap(arr[i],arr[min_indx]);
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
    Selection_sort(arr,n);
    cout<<endl<<"Sorted Array : "<<endl;
    for(int i = 0; i < n; i++)
    {
    	cout<<arr[i]<<" ";
    }
    return 0;
}