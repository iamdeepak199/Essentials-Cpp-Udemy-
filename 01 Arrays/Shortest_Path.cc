#include <bits/stdc++.h>
using namespace std;

void fastio(bool read = false) 
{
    if(read) 
    {
        #ifndef ONLINE_JUDGE
        freopen#include <bits/stdc++.h>
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
    cout << "Enter the Direction: " << endl;

    char sentance[100];
    cin.getline(sentance,1000);
    cout<<sentance;

    for(int i = 0; sentance[i] != '\0'; i++)
    {
        switch(sentance[i])
        {
            case 'N': 
                y++;
                break;
            case 'S': 
                y--;
                break;
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
            default:
                cout << "Invalid\n";
        }
    }
    return 0;
}



/*  
output.txt


*/