#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node* next;

};

class linklist{
 private:

    Node* head, *cur;
    int n ;

public:
    linklist(){
        head = nullptr;
        n = 0;
    }
    int size () {return n;}

void InsertFront(int value){
        Node* newNode = new Node{value, head};
        head = newNode;
        n++;
    }
void InsertEnd(int value) {
    Node* newNode = new Node{value, nullptr};
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    n++;
}
void InsertMid(int value, int pos ){

    if (pos > n)
    {
        cout << "out of node range \n" << endl;
        return ;
    }
    if (pos == 0)
    {
        InsertFront(value);
        return ;
    }
    if (pos == n )
    {
        InsertEnd(value);
        return ;
    }
    cur = head;
    for (int i = 0; i < pos - 1; i++)
    {
        cur = cur ->next;
    }
    Node* newNode = new Node{value, nullptr};
        newNode->next = cur ->next;
        cur -> next = newNode;
        n++;
}
void deleteFront(){
    if (n == 0)
    {
        cout << "No node to delete"<< endl;
        return;
    }
    Node * Cur = head;
    head = head-> next;
    delete cur ;
    n--;
}
void deleteEnd(){
    if( n == 0){
        cout << "No node to delete" << endl;
        return ;
    }
    if (head ->next == 0)
    {
        delete head;
        head = 0;
        return;
    }
    Node* cur = head;
    while (cur->next->next != nullptr)
    {
        cur = cur ->next;
    }
    delete cur -> next;
    cur -> next = nullptr;
}
void deleteMid(int pos){
    
    if (head == nullptr)
    {
        cout << "List is empty" << endl;
        return ;
    }
    if (pos <= 0)
    {
        cout << "Invalid position";
        return;
    }
    Node * cur = head ;
    for (int i = 0 ; cur != nullptr && i < pos -1 ; i++)
    {
        cur = cur ->next;
    } Node* Nodedelete = cur->next;
    cur->next = Nodedelete->next;
    delete Nodedelete;
}
void swapNodes(int pos1, int pos2) {
    if (pos1 == pos2) {
        cout << "Both positions are the same — nothing to swap." << endl;
        return;
    }

    if (pos1 <= 0 || pos2 <= 0 || pos1 > n || pos2 > n) {
        cout << "Invalid positions." << endl;
        return;
    }

    // Ensure pos1 < pos2 for simplicity
    if (pos1 > pos2) swap(pos1, pos2);

    Node* prev1 = nullptr;
    Node* curr1 = head;
    for (int i = 1; i < pos1; i++) {
        prev1 = curr1;
        curr1 = curr1->next;
    }

    Node* prev2 = nullptr;
    Node* curr2 = head;
    for (int i = 1; i < pos2; i++) {
        prev2 = curr2;
        curr2 = curr2->next;
    }
    // If any node is missing (invalid positions)
    if (curr1 == nullptr || curr2 == nullptr) {
        cout << "Position out of range." << endl;
        return;
    }

    // Step 1: Update previous nodes' next pointers
    if (prev1 != nullptr)
        prev1->next = curr2;
    else
        head = curr2;

    if (prev2 != nullptr)
        prev2->next = curr1;
    else
        head = curr1;

    // Step 2: Swap next pointers
    Node* temp = curr1->next;
    curr1->next = curr2->next;
    curr2->next = temp;

    cout << "Swapped nodes at positions " << pos1 << " and " << pos2 << endl;
}

void searchAll(int value) {
    if (head == nullptr) {
        cout << "The list is empty." << endl;
        return;
    }

    Node* cur = head;
    int pos = 1;
    bool found = false;

    while (cur != nullptr) {
        if (cur->value == value) {
            cout << "Value " << value << " found at position " << pos << "." << endl;
            found = true;
        }
        cur = cur->next;
        pos++;
    }

    if (!found) {
        cout << "Value " << value << " not found in the list." << endl;
    }
}


void Display(){
        Node*cur = head ;
        while (cur != nullptr)
        {
         cout << cur ->value << "->";
         cur = cur ->next;
        }
        cout << "Null"<< endl;
    }
};

