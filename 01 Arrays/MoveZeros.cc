#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define ll long long int
#define endl "\n"

void fastio(bool read = false) {
    if (read) {
        #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
        freopen("../error.txt", "w", stderr);
        #endif
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


int main() 
{
    fastio(true);
    int testCase;
    cin >> testCase;
    
    for(int id = 1; id <= testCase; ++id)
    {
        int n;
        cin >> n;
        vector<int> v(n); 

        for(int i = 0; i < n; ++i)
        {
            cin >> v[i];  
        }

        for(int i = 0; i < n; ++i)
        {
            cout << v[i] << " "; 
        }

        cout << endl;
    }

    return 0;
}

/*
Sample Input:

3
5 10 20 30 40 50
6 2 3 4 6 8 9
7 1 2 3 4 5 6 7


Sample Output:

Linked list: 50 40 30 20 10 
Linked list After Reverse: 10 20 30 40 50 
Linked list: 9 8 6 4 3 2 
Linked list After Reverse: 2 3 4 6 8 9 
Linked list: 7 6 5 4 3 2 1 
Linked list After Reverse: 1 2 3 4 5 6 7 

*/