#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*head;
struct node*func_for_making_node(int a){
	struct node*func_for_making_node=(struct node*)malloc(sizeof(struct node));
	func_for_making_node->data=a;
	func_for_making_node->next=NULL;
	return func_for_making_node;
}
void insertion(b){
	if(head==NULL)
	{
		head=func_for_making_node(b);
	}
	else{
		struct node*previous_node=head;
		
		previous_node=func_for_making_node(b);
		previous_node->next=head;
		head=previous_node;
	}
}
void insert_at_end(int c){
	struct node*previous_node=head;
	while(previous_node->next!=NULL){
		previous_node=previous_node->next;
		
	}
	previous_node->next=func_for_making_node(c);
	
	
}









void print(){
struct node*previous_node=head;
while(previous_node!=NULL){
	printf("%i  ",previous_node->data);
	previous_node=previous_node->next;
}
}
int main(){
	head=NULL;
	insertion(10);
insertion(20);
insertion(30);
insertion(40);
print();
printf("\n");
insert_at_end(5);
print();	
}
