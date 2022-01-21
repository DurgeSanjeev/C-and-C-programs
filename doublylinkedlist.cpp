//Header linkedlist is a linkedlist where its first node has all the required deatils of the whole linked list
//and here we update or delete the linkedlist we also need to update the header simultenously

#include<iostream>
#include<stdlib.h>
using namespace std;

int traversal(struct Node*);




struct Node{
	int data;
	struct Node* next;  
	struct Node* prev;                  
} ;

int main(){
	
	struct Node* head=NULL;
	struct Node* prev=NULL;
	struct Node *second=NULL;
 	struct Node *third=NULL;
 	struct Node *fourth=NULL;
 	struct Node *ptr=NULL;
	
	
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	
	head->prev=NULL;
	head->data=71;
	head->next=second;
	
	second->prev=head->next;
	second->data=72;
	second->next=NULL;
	
	traversal(head);

}

int traversal(struct Node *ptr){
	int c=0;                                  
	while(ptr!=NULL){                         
		c++;                                    
		cout<<"data is"<<ptr->data<<endl;      
		ptr = ptr->next;	                     
	}
	cout<< "the count is"<<c <<endl;
	}
