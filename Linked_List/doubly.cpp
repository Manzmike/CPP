#include <iostream>

using namespace std;



class Node{
public:
	int value;
	Node* next;
	Node* prev;
};

void print_list_assending(Node *n){
	cout<<"Assending!"<<endl;
	while(n != NULL){
		cout<<"Value:"<<n->value<<endl;
		n=n->next;
	}

}


void print_list_desending(Node *n){
	cout<<"Desending!"<<endl;
	while(n != NULL){
		cout<<"Value:"<<n->value<<endl;
		n=n->prev;
	}


}


int main(){

Node *head = new Node();
Node *second = new Node();
Node *third = new Node();

head->value = 1;
head->next = second;
head->prev = NULL;

second->value = 2;
second->next = third;
second->prev = head;

third->value = 3;
third->next = NULL;
third->prev = second;


print_list_assending(head);




print_list_desending(head);

}


