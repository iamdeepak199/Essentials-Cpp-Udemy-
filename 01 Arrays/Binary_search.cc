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
string Binary_Search(int *arr, int n, int target)
{
	int left = 0; 
	int right = n - 1;
	while(left <= right)
	{
		int mid = (left + right)/2;
		if(arr[mid] == target) return "Present";
		else if(arr[mid] < target) left = mid + 1;
		else right = mid - 1;
	}
	return "Absent";
}

int main() 
{
    fastio(true);
    int n , target;
    cout << " Enter the Size of the Array & it's Elements:" <<endl;
    cin >> n;
    int arr[n];
    cin >> target;
    cout << "Enter the target Value : "<<target<<endl;
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i)
    {
    	cout << arr[i] << " " ;
    }
    // sort(arr)
    string ans  = Binary_Search(arr,n,target);
    cout <<endl <<"Target value is: "<<ans;

    return 0;
}

/*

output.txt
 
Enter the Size of the Array & it's Elements:
Enter the target Value : 40
1 2 3 4 5 6 7 8 9 10 
Target value is: Absent

*/