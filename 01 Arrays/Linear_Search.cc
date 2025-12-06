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
string Linear_Search(int *arr, int n, int target)
{

	for (int i = 0; i < n; ++i)
	{
		if(arr[i] == target) return "Present";
	}
	return "NOT Present";
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
    for (int i = 0; i < n; ++i)
    {
    	cout << arr[i] << " " ;
    }
    
    string ans  = Linear_Search(arr,n,target);
    cout <<endl <<"Target value is: "<<ans;

    return 0;
}

/*

output.txt
 
Enter the Size of the Array & it's Elements:
Enter the target Value : 7
9 2 3 1 4 5 7 8 10 33 
Target value is: Present





*/