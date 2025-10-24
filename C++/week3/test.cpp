#include <iostream>
#include "CSLL.hpp"
using namespace std;

int main() {
    linklist list;

    // Insert some nodes
    list.insertEnd(10);
    list.insertEnd(20);
    list.insertEnd(30);
    list.insertEnd(40);

    cout << "Initial list: ";
    list.display();

    // Get head and some nodes manually for testing
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;

    // We need to get these pointers from the list
    head = list.getHead(); // we’ll add getHead() next
    second = head->next;
    third = second->next;

    // 🟢 Case 1: Delete with predecessor (delete 30 using pred=20)
    cout << "\nDeleting node (30) with predecessor (20)...\n";
    list.deleteWPred(second); // second’s next is 30
    list.display();

    // 🔵 Case 2: Delete without predecessor (delete head)
    cout << "\nDeleting node (head = 10) without predecessor...\n";
    list.deleteNodeWithoutPred(list.getHead());
    list.display();

    return 0;
}
