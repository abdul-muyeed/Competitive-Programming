#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node* next;
	node(int val){
		data = val;
		next = NULL;
		
	}
};
void insertAtStart(node* &head, int val){
	node* n = new node(val);
	n->next = head;
	head = n;
}
void insertAtEnd(node* &head, int val){
	node* n = new node(val);
	if(head==NULL){
		head = n;
		return;
	}
	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = n;
}
void display(node* head){
	node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	} cout<<"\n";
}

int main(){
	node* head = NULL;
	int n;
	cin>> n;
	for(int i=0; i<n; i++){
		int num;
		cin>> num;
		insertAtEnd(head, num);
	}
	display(head);
	
	insertAtStart(head,1000);
	display(head);
	return 0;
}