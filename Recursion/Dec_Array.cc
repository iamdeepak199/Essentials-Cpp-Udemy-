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

void Dec(int n){
    if(n == 0)
        return;
    cout << n << " ";
    Dec(n - 1);
}

int main() 
{
    fastio(true);
    int n;
    cout << "Enter the Value of N :" << endl; 
    cin>>n;
    Dec(n);;
    return 0;
}