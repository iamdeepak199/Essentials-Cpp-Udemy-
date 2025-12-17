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
    char arr[1000];
    cout << "Enter the characters of the Array : " << endl;

    int length = 0;
    char temp = cin.get();

    while (temp != '\n') 
    {
        cout << temp;    
        arr[length] = temp; 
        length++;

        temp = cin.get(); 
    }

    cout << "\nLength = " << length << endl;

    return 0;
}


/*  
output.txt

Enter the charaters of the Array : 
hello my name is deepak i'm 
asoftware engineer wright now 
i'm learning cpp basic's concepts.

*/
