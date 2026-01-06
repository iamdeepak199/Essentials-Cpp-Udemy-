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

string CompressString(string s){
    int n = s.length();
    string output;

    for(int i = 0;i < n; i++){
        int count = 1;

        while(i < n - 1 and s[i + 1] == s[i]){
            count++;
            i++;
        }
        output += s[i];
        output += to_string(count);
    }
    return output;
}
int main() 
{
    fastio(true);
    cout << "Enter A string : " << endl; 
    string str;
    string str2 = "alen"; 
	getline(cin, str);
    cout<<"Enter string is :";
	for(int i = 0; i < str.size(); i++){
    cout << str[i];
	}
    cout<<endl;
    cout<<"Encoded string is :"<<CompressString(str);
    return 0;
}


/*

output :

Enter A string : 
Enter string is :aaabbbccdeefghhh
Encoded string is :a3b3c2d1e2f1g1h3


*/