#include<iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
};
void printList(Node* node)
{
    while (node != NULL)
    {
        cout << node->value << " ";
        node = node->next;
    }
}
void addNode(Node*& head,Node*& tail, int val)
{

    if (head == nullptr && tail==nullptr)
    {
        Node* node = new Node();
        node->value = val;
        node->next = nullptr;
        head = node;
        tail = node;
    }
    else
    {
        Node* node = new Node();
        node = new Node();
        node->value = val;
        node->next = nullptr;
        tail->next = node;
        tail = node;
    }

}

void insertAtHead(Node* &head,int value) {

	Node* newNode = new Node();
	newNode->value = value;
	newNode->next = head;
	head = newNode;

}

void deleteNode(Node*& head, int key) {
	Node* temp = head;
	Node* prev = nullptr;

	if (temp != nullptr && temp->value == key) {
		head = temp->next;
		delete temp;
		return;
	}
	while (temp != nullptr && temp->value != key) {
		prev = temp;
		temp = temp->next;
	}
	if (temp == nullptr) return;

	prev->next = temp->next;

	delete temp;
}

int main()
{


    Node* head=nullptr;
    Node* tail = nullptr;
    cout <<"Enter no of value: ";
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        addNode(head, tail, i );
    }

    printList(head);
    insertAtHead(head, 5);
    cout<<"\nAfter Add 5 at Head: \n";
    printList(head);
    cout<<"\nEnter the value which you want delete: ";
    int de ; cin>>de;
    deleteNode(head, de);
    cout<<"\nAfter delete "<<de<<": \n";
    printList(head);


return 0;
}
