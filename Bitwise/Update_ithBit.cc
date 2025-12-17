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
void clear_ithBit(int n, int i)
{
    int mask = ~(1 << i);
    n = (n&mask);
}
void update_ithBit(int &n, int i , int v)
{
    clear_ithBit(n,i);
    int mask = (v<<i);
    n = n | mask; 
}
int main() 
{
    fastio(true);
    int n;
    cout << "Enter Value :" << endl;
    cin >> n;
    int i;
    cout << "Enter ith Bit :" << endl;
    cin >> i;

    update_ithBit(n,i,1);
    cout<<n;
    return 0;
    
}

/*

output:

Enter Value : 5
Updated ith Bit : 7
*/