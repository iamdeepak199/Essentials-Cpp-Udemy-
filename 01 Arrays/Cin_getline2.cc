#include <bits/stdc++.h>
using namespace std;

void fastio(bool read = false) 
{
    if(read) 
    {
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        freopen("error.txt","w",stderr);
        #endif  
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() 
{
    fastio(true);
    cout << "Enter the characters of the Array : " << endl;

    char sentance[100];
    cin.getline(sentance,1000);
    cout<<sentance;
    return 0;
}



/*  
output.txt

Enter the characters of the Array : 
hello every one this side deepak 
this the example of cin.getline()method.
*/
