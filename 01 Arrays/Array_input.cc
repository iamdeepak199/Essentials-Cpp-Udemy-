#include <bits/stdc++.h>
using namespace std;

void fastio(bool read = false) 
{
    if(read) 
    {
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        freopen("error.txt","w",stderr);
        #endif  
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() 
{
    fastio(true);
    int n;
    cout << "Enter the Size of the Array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of the Array : ";
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }
    for (int i = 0; i < n; ++i)
    {
    	cout << arr[i] << " "; 
    }


    return 0;
}


/*  
output.txt

Enter the Size of the Array : 5
Enter the Elements of the Array : 1 2 3 4 5   


*/
