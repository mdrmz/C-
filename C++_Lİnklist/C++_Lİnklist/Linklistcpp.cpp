#include <string>
#include <iostream>

using namespace std;

// Creating a node
class Node {
public:
    int value;
    string lastname;
    Node* next;
};

int main() { 
    Node* head;
    Node* tmp;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;
    Node* four = NULL;

    // allocate 3 nodes in the heap
    one = new Node();
    two = new Node();
    three = new Node();
    four = new Node();

    // Assign value values
    one->value = 1;
    two->value = 2;
    three->value = 3;
    four->value = 4;
    one->lastname = "head";


    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

     
    //move to trash Node
    int a;
    head = one;
    cout << "Silmek istediginiz  deger girin";
    cin >> a;

    if (one->value == a)
    {
        one = one->next;
    }
    tmp = head;
    head = head->next;
    while (head != NULL)
    {           
        if (head->value == a)
        {
            tmp->next = head->next;
           
        }
        tmp = head;
        head = head->next;
    }
    


    // print the linked list value
    head = one;
    while (head != NULL) {
        cout << head->value << " " << head->lastname << endl;
        head = head->next;
    }
}