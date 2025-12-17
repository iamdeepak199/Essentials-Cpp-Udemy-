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
int ithBit(int n, int i)
{
    int mask = (1 << i);
    return (n&mask) > 0 ? 1 : 0;

    
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

    cout<< ithBit(n,i);
    return 0;
    
}

/*

output:

Enter Value :
Enter ith Bit :
1

*/