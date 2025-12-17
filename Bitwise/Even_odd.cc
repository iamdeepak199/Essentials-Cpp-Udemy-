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

int main() 
{
    fastio(true);
    int n;
    cout << "Enter Value :" << endl;
    cin >> n;
    if(n&1){
        cout <<n<<" is an odd number"<<endl;
    } 
    else{
        cout << n << " is an even Number" << endl;     }
    return 0;
}

/*

output:


Enter Value :
15 is an odd number

*/