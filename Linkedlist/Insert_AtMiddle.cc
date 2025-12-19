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
    if(head == NULL){
        head = new_node;
        return;
    }
    new_node->next = head;
    head = new_node;

}

void insertAtMiddle(node*& head, int val, int pos) {
    if (pos < 0) {
        cout << "Invalid Index" << endl;
        return;
    }

    if (pos == 0) {
        insertAtHead(head, val);
        return;
    }

    node* temp = head;

    for (int i = 0; i < pos - 1; i++) {
        if (temp == NULL) {
            cout << "Position out of range" << endl;
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position out of range" << endl;
        return;
    }

    node* new_node = new node(val);
    new_node->next = temp->next;
    temp->next = new_node;
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

    cout << "Linked list: ";
    display(head);
    cout << "Linked list After insert At Middle: ";
    insertAtMiddle(head,9,2);
    display(head);

    return 0;
}


/*


output :
Enter number of nodes: Enter 6 values:
Linked list: 6 5 4 3 2 1 
Linked list After insert At Middle: 6 5 9 4 3 2 1 


*/