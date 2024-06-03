#include <iostream>
using namespace std;

//Creating a class node as done in the earlier code
class Node{
  public:
    int data;
    Node* next;

    Node () {
     data = 0;
     next = NULL;
    }

    Node (int data) {
    this->data = data;
    next = NULL;
   }
};
//Insert at head
void insertatHead(Node* &head, int data) {
  //Step 1
  Node* newnode = new Node(data);
  //Step 2
  newnode -> next = head;
  //Step 3
  head = newnode;
}


//Print function as use din previous code
void print ( Node* &head) {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp->data << " ";
  temp = temp->next;
  }
}

int main() {
  //Making a node
  Node* head;
  //Created a node in heap memory
  head = new Node(100);
  

  //Inserting at Head
  insertatHead(head, 20);
  insertatHead(head, 30);
  insertatHead(head, 40);
  insertatHead(head, 50);
  insertatHead(head, 60);
  insertatHead(head, 70);

  print(head);

 
}




