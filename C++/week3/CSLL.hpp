#ifndef CSLL
#define CSLL
#include "node.hpp"
#include <iostream>
using namespace std;

class linklist {
private:
    Node* head;
    int n;

public:
    linklist() {
        head = nullptr;
        n = 0;
    }

    int size() {
        return n;
    }

    void deleteWPred(Node* pred) {
        if (pred == nullptr || pred->next == nullptr)
            return;

        Node* cur = pred->next;
        pred->next = cur->next;

        // If deleting head
        if (cur == head)
            head = cur->next;

        delete cur;
        n--;
    }

    void deleteNodeWithoutPred(Node* target) {
        if (head == nullptr || target == nullptr)
            return;

        // Case: target is head
        if (target == head) {
            Node* cur = head;
            while (cur->next != head)
                cur = cur->next;  // find last node
            cur->next = head->next;
            Node* temp = head;
            head = head->next;
            delete temp;
        } 
        else {
            Node* pred = head;
            while (pred->next != target && pred->next != head)
                pred = pred->next;

            if (pred->next == head) return; // target not found

            pred->next = target->next;
            delete target;
        }
        n--;
        
    }
};

#endif
