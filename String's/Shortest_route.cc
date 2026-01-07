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
    cout << "Enter A string to find shortest route : " << endl; 
    int x = 0,y = 0;

    string str;
	getline(cin, str);
	for(int i = 0; i < str.size(); i++){
    cout << str[i];
	}
	cout<<endl;

	for(int i = 0; i < str.length(); i++){
		if(str[i] =='N'){
			x++;
			}
		else if(str[i] == 'S'){
			x--;
		}
		else if(str[i] == 'E'){
			y++;
		}
		else{
			y--;
		}
	}
	 if (x > 0 && y > 0) {
        cout << "X & Y are in the 1st quadrant" << endl;
    }
    else if (x < 0 && y > 0) {
        cout << "X & Y are in the 2nd quadrant" << endl;
    }
    else if (x < 0 && y < 0) {
        cout << "X & Y are in the 3rd quadrant" << endl;
    }
    else if (x > 0 && y < 0) {
        cout << "X & Y are in the 4th quadrant" << endl;
    }
    else {
        cout << "Point lies on X-axis, Y-axis, or Origin" << endl;
    }

    cout << "Final result is " << x << "," << y << endl;
    return 0;
}


/*

output :

Enter A string to find shortest route : 
SNNNEWESSSSWWW
X & Y are in the 3rd quadrant
Final result is -2,-2

*/