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

int Fact(int n){
    if(n == 0)
        return 1;
    return n*Fact(n-1);
}
int main() 
{
    fastio(true);
    int n;
    cout << "Enter the Value of N :" << endl; 
    cin>>n;
    cout<<"Factorial of is "<<Fact(n);;
    return 0;
}