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
    char arr[][10] = {
    	"one",
    	"two",
    	"three",
    	"four",
    	"five",
    	"six",
    	"seven",
    	"eight",
    	"nine",
    	"ten"
    };
    cout << "Enter the charaters of the Array : "<<endl;
  
    for(int j = 0; j < 10; j++)
    {
    	cout << arr[j];
    	cout<<endl;
   	}
   	


    return 0;
}


/*  
output.txt

Enter the Size of the Array : 5
Enter the Elements of the Array : 1 2 3 4 5   


*/
