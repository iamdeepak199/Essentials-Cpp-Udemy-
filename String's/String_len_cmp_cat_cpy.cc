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
    string str2 = "alen"; 
	getline(cin, str);
	for(int i = 0; i < str.size(); i++){
    cout << str[i];
	}
	cout<<endl;
    cout <<"string length is : " <<str.length();
    cout<<endl;
    cout <<"if string is 1 than string is same otherwise not same : " <<str.compare(str2);
    cout<<endl;
    cout<<"Concatination of two string is :" << str + str2<<endl;
    string str3 = str;
    cout << "string copy : "<<str3 << endl;
    return 0;
}


/*

output :

Enter A string : 
hello my name is 
string length is : 17
if string is 1 than string is same otherwise not same : 1
Concatination of two string is :hello my name is alen
string copy : hello my name is 


*/