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
int firstOccurance(int arr[],int n,int key){
	if(n==0){
		return -1;
	}
	if(arr[0] == key){
		return 0;
	}
	int subindex = firstOccurance(arr + 1, n - 1, key);
	if(subindex != -1){
		return subindex + 1;
	}
	return -1;
}

int main() 
{
    fastio(true);
    int n,key;
    cin>>n>>key;
    cout << "Enter the Size of the Array & key:" <<n<< endl;
    int arr[n];
    cout << "Enter the elements of the array : ";
    for(int i = 0; i < n; i++){
    	cin>>arr[i];
    } 
    for(int i = 0; i < n; i++){
    	cout<<arr[i]<<" ";
    } 
    cout<<endl;
    cout<<"Enter Key -> "<<key<<endl;
    cout<<"key is Present at index: "<<firstOccurance(arr,n,key);
    return 0;
}
/*
input : 
5
3
1 2 3 4 5

output: 

Enter the Size of the Array & key:5
Enter the elements of the array : 1 2 3 4 5 
Enter Key -> 3
key is Present at index:2
*/