#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

void fastio(bool read = false) {
    if (read) {
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
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

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void Search(node* head,int key){
    int index = 0;
    node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            cout<<"Key is Found at the  :"<< index<<endl;
        }
        temp = temp -> next;
        index++;
    }
    cout<<"Key not Found :"<<endl;
}

int main() {
    fastio(true);

    node* head = NULL;

    cout << "Enter number of nodes: ";
    int n;
    cin >> n;

    cout << "Enter " << n << " values:" << endl;
    for (int i = 1; i <= n; i++) {
        int val;
        cin >> val;
        insertAtHead(head, val);
    }

    cout << "Linked list: "<<endl;
    display(head);
    int key;
    cin >> key;
    Search(head,key);
    display(head);

    return 0;
}


/*

output :

Enter number of nodes: Enter 6 values:
Linked list: 
6 5 4 3 2 1 
Key is Found at the  :4
Key not Found :
6 5 4 3 2 1 

*/