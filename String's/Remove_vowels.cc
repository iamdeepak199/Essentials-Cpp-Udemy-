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
    vector<char>vowels ={'a','e','i','o','u'};
    vector<char>ans;
	getline(cin, str);
	for(int i = 0; i < str.size(); i++){
    cout << str[i];
	}
    cout<<endl;
    for(int i = 0; i < str.size(); i++){
        if(find(vowels.begin(), vowels.end(),
                      str[i]) != vowels.end()){
            continue;
        }
        else{
            ans.push_back(str[i]);
        }
    }
    cout<<"After remove vowels :"<<endl;
    for(int i = 0; i < ans.size(); i++){
    cout << ans[i];
    }
    return 0;
}


/*

output :

Enter A string : 
deepak bhardwaj 
After remove vowels :
dpk bhrdwj 


*/