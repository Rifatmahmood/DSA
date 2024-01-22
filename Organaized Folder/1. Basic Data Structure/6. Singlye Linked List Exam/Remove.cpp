#include <iostream>
#include <unordered_set>

class Node {
public:
    int val;
    Node* next;

    Node(int value) {
        this->val = value;
        next = NULL;
    }
};

void insertAtTail(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node(value);

    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void removeDuplicates(Node* head) {
    Node* tmp = head;

    while (tmp) {
        Node* tmp2 = tmp;

        while (tmp2->next) {
            if (tmp2->next->val == tmp->val) {
                Node* duplicate = tmp2->next;
                tmp2->next = tmp2->next->next;
                delete duplicate;
            } else {
                tmp2 = tmp2->next;
            }
        }

        tmp = tmp->next;
    }
}

void printLinkedList(Node* head) {
    Node* tmp = head;

    while (tmp) {
        std::cout << tmp->val << " ";
        tmp = tmp->next;
    }

    std::cout << std::endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int value;

    while (true) {
        std::cin >> value;

        if (value == -1) {
            break;
        }

        insertAtTail(head, tail, value);
    }

    removeDuplicates(head);
    printLinkedList(head);

    return 0;
}