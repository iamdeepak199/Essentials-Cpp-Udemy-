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
    cout << "Enter A string : " << endl; 
    int alpha = 0;
	int digit = 0;
	int space = 0;

    string str;
	getline(cin, str);
	for(int i = 0; i < str.size(); i++){
    cout << str[i];
	}
	cout<<endl;

	for(int i = 0; i < str.length(); i++){
		if(str[i] >= '0' and str[i] <= '9'){
			digit++;
			}
		else if(str[i] >='a' and str[i] <= 'z'){
			alpha++;
		}
		else{
			space++;
		}
	}
	cout<<"Total digits : "<<digit<<endl;
	cout<<"Total Alphabats : " <<alpha<<endl;
	cout<<"Total space :"<< space<<endl;
    return 0;
}


/*

output :
Enter A string : 
hello this side boat tell me 8/2 what is the value ?? ans is 4 correct...
Total digits : 3
Total Alphabats : 49
Total space :21


*/