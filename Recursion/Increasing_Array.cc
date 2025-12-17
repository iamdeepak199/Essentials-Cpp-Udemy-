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

void increasing(int n){
    if(n == 0)
        return;
    increasing(n - 1);
    cout << n << " ";
}

int main() 
{
    fastio(true);
    int n;
    cout << "Enter the Value of N :" << endl; 
    cin>>n;
    increasing(n);;
    return 0;
}

/*

output :

Enter the Value of N :
1 2 3 4 5 

*/