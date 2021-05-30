#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
void insert( struct node **head,int data){

 node* newnode=new node();
	newnode->data=data;
	newnode-> next=*head;
	*head=newnode;
}
void print(struct node *head){
struct node *temp=head;
while(temp!=NULL){
cout<<temp->data <<"->";
temp=temp->next;
}
cout<<"Null"<<"\n";
}
int main(){

struct node *head =NULL;
insert(&head,10);
insert(&head,20);
insert(&head,30);
print(head);
}

