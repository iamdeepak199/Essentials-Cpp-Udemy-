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
void clear_LAST_ithBit(int n, int i, int j)
{
    int a = (-1)<< j + 1;
    int b = (1<< i) - 1;
    int mask = a|b;
    n = n & mask;
    cout<<"After clear :"<<n<<endl;;
}
int main() 
{
    fastio(true);
    int n;
    cout << "Enter Value :" << endl;
    cin >> n;
    int i , j;
    cout << "Clear Last ith Bit :" << endl;
    cin >> i >> j;

    clear_LAST_ithBit(n,i,j);

    return 0;
    
}

/*

output:

Enter Value : 31 
Clearith Bit  in range : 0  to 3:
After clear :16
*/