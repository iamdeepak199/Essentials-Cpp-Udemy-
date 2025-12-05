#include <bits/stdc++.h>
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

// Node class
class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node*& head, int val) {
    node* new_node = new node(val);
    new_node->next = head;
    head = new_node;
}


/*

[] => []
[1 2 3] => 

newhead = []
curr = [1 2 3]

1. 
next = [2 3]
curr = [1]
newHead = [2 1]
cur = [2 3]

2. 


*/

node* ReverseLL(node* head){
	node*new_head = NULL;
	node*currptr = head;
	node*nextptr;

	while(currptr!= NULL){
		nextptr = currptr->next;
		currptr->next = new_head;
		new_head = currptr;
		currptr = nextptr;
	}
	return new_head;
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    fastio(true);
    int testCase;
    cin >> testCase;
    for(int id = 1; id <= testCase; ++id)
    {
	    int n;
    	cin >> n;
    	node* head = nullptr;
    	for (int i = 1; i <= n; i++) 
    	{
        	int val;
        	cin >> val;
        	insertAtHead(head, val);
    	}
    	cout << "Linked list: ";
    	display(head);	
    	cout << "Linked list After Reverse: ";
    	node*new_head = ReverseLL(head);
    	display(new_head);	
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