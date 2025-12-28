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

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        data = d;
        left = right = NULL;
    }
};


Node* buildTree() {
    int d;
    cin >> d;

    if (d == -1) {
        return NULL;
    }

    Node* n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

void printPreorderd(Node* root){
	if(root == NULL){
		return;
	}
	cout<<root->data<<" ";
	printPreorderd(root->left);
	printPreorderd(root->right);
}
int main() 
{
    fastio(true);
    Node* root = buildTree();
    cout<<"In Preorderd :";
    printPreorderd(root);
    return 0;
}

/*
input : 1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1

output : 1 2 4 5 3 6 (Pre-ordered)

        1
       / \
      2   3
     / \   \
    4   5   6

*/