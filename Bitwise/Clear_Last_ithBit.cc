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
void clear_LAST_ithBit(int n, int i)
{
    int mask = (-1 << i);
    n = (n&mask);
    cout<<"After clear :"<<n<<endl;;
}
int main() 
{
    fastio(true);
    int n;
    cout << "Enter Value :" << endl;
    cin >> n;
    int i;
    cout << "Clear Last ith Bit :" << endl;
    cin >> i;

    clear_LAST_ithBit(n,i);

    return 0;
    
}

/*

output:

Enter Value : 15
Clear Last ith Bit : 2
After clear : 12
*/