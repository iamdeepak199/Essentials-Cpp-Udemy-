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
    string str;
	getline(cin, str);
	bool is_Palindrom = true;

	for(int i = 0; i < str.size(); i++){
    cout << str[i];
	}
	int i = 0, j = str.length() - 1;
	while(i < j){
		if(str[i] != str[j]){
			is_Palindrom = false;
			break;
		}
		i++;
        j--;
	}
	if(is_Palindrom)
		cout<<" strings is Palindrom : "<<endl;
	else
		cout<<" string is Not Palindrom : "<<endl;


    return 0;
}


/*

output :




*/