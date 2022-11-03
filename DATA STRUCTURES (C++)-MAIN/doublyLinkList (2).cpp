#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
 	struct node *prev, *next;
};

void traversal(struct node *head)
{
	while(head != NULL){
		head = head->next;
	}
}


int main(void){
	
	// Making the nodes
	struct node *n1, *n2, *n3, *n4;

	// Initializin' Nodes 
	n1 = (node*)malloc(sizeof(node));
	n2 = (node*)malloc(sizeof(node));
	n3 = (node*)malloc(sizeof(node));
	n4 = (node*)malloc(sizeof(node));

	// Linkin' Nodes 
	n1->next = n2;
	n1->prev = NULL;
	
	n2->next = n3;
	n2->prev = n1;
	
	n3->next = n4;
	n3->prev = n2;
	
	n4->next = NULL;
	n4->prev = n3;

	return 0;
}