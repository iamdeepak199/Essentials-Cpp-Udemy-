#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

void fastio(bool read = false) {
	if(read) {
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

class student
{
public:
	int age;
	string name;
	int rollNumber;
};

int Solution(int num1, int num2)
{
	return num1*num2;
}

int main()
{
	fastio(true);
	int testCases;
	cin >> testCases;
	for(int i = 1; i <= testCases; ++i)
	{
		int a, b;
		cin >> a >> b;
		cout << "TestCase #" << i << ": " << Solution(a, b) << endl;
	}
	return 0;
}

git init
git add .
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/iamdeepak199/Essentials.git
git push -u origin main