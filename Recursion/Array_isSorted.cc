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

bool is_Sort(int arr[], int n) {
    if (n <= 1) {
        return true;
    }
    if (arr[0] <= arr[1] && is_Sort(arr + 1, n - 1)) {
        return true;
    } 
    return false;
}
int main() 
{
    fastio(true);
    int n;
    cout << "Enter the size of Array :" << endl; 
    cin>>n;
    int arr[n];
    cout << "Enter the elements of Array :" << endl; 
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
     if (is_Sort(arr, n)) {
        cout << "Array is Sorted." << endl;
    } else {
        cout << "Array is Not Sorted." << endl;
    }
    return 0;
}
/*

output
Enter the size of Array :
Enter the elements of Array :
1  2  1  5  6  
Array is Not Sorted.



*/