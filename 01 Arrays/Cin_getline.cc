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

    int alpha = 0, space = 0, digit = 0;
    char temp = cin.get();

    while (temp != '\n') 
    {
        if (temp >= '0' && temp <= '9')
            digit++;

        else if (temp == ' ' || temp == '\t')
            space++;

        else if ((temp >= 'a' && temp <= 'z') || (temp >= 'A' && temp <= 'Z'))
            alpha++;

        temp = cin.get();
    }

    cout << "Total Alpha: " << alpha << endl;
    cout << "Total Digit: " << digit << endl;
    cout << "Total Space: " << space << endl;

    return 0;
}



/*  
output.txt


*/
