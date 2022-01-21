//Header linkedlist is a linkedlist where its first node has all the required deatils of the whole linked list
//and here we update or delete the linkedlist we also need to update the header simultenously

//circular linkedlist is a kinda linkedlist where last node again points to the head of the linkedlist
#include<iostream>
#include<stdlib.h>
using namespace std;


void traversal_cirll(struct Node*);

struct Node{
	int data;
	struct Node* next;                    
} ;

int main(){
 	struct Node *head=NULL;
 	struct Node *second=NULL;
 	struct Node *third=NULL;
 	struct Node *fourth=NULL;
 	struct Node *ptr=NULL;
 	
 	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	
	head->data=111;
	head->next=second;
	/*cout<<head->data<<endl;
	cout<<head->next<<endl;*/
	
	second->data=122;
	second->next=third;
	/*cout<<second->data<<endl;
	cout<<second->next<<endl;*/
	
	third->data=133;
	third->next=fourth;
	/*cout<<third->data<<endl;
	cout<<third->next<<endl;*/
	
	fourth->data=144;
	fourth->next=head;           //the only change is last node link points to the head
	traversal_cirll(head);
}
//traversing the circular linkedlist using dowhile loop
void traversal_cirll(struct Node*head){
	struct Node* ptr=head;
	do{
		cout<<"elements are"<<ptr->data<<endl;
		ptr=ptr->next;
	}
	while(ptr!=head);	
	
}

//to inmsert element in circular linkedlist


