/*  I. Insertion:
            1. Begin
            2. End
            3. Given position

   II. Deletion:
            1. Begin
            2. End
            3. Given position

    III. Update:
            1. Begin
            2. End
            3. Given position
    
    IV. Search: -- */

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;

void insert_begin(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void insert_end(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* traverse = head;

    while(traverse->next != NULL) {
        traverse = traverse->next;
    }
    traverse->next = newNode;
}

void insert(int data, int position) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* traverse = head;

    while (traverse->next != NULL && position != 1) {
        traverse = traverse->next;
        position--;
    }
    newNode->next = traverse->next;
    traverse->next = newNode;
}


void delete_first(int data) {

    if (head == NULL) {
        return;
    }
    Node* node_to_del = head;
    head = node_to_del->next;

    delete node_to_del;
}

void delete_last(int data) {
    
    if (head == NULL) {
        return;
    }

    Node* current = head;

    if (head->next == NULL) {
        current = head;
        head = NULL;
        delete current;    
        return;
    }

    Node* previous = NULL;

    while(current->next != NULL) {
        previous = current;
        current = current->next;
    }

    previous->next = NULL;
    delete current;
}

void insert(int data, int position) {
    
    if (head == NULL) {
        return;
    }

    Node* current = head;
    Node* prev = NULL;

    while (current->next != NULL && position != 1) {
        current = current->next;
        position--;
    }

    prev = current->next;
    current->next = current->next->next;
    delete prev;
}



int main() {


    return 0;
}