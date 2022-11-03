#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>

struct node * createBTreeNode(node *, int );
void traversal(node *);

using namespace std;
struct node {
    int data;
    node *l, *r;
};  

struct node * createBTreeNode( int item){
    // declaring the 'n' pointer to Access the dynamic block 
    node *n;

    // Creating the dynamic Block
    n = new node[sizeof(node)]; 

    // or another Way is...
    // n = new node();

    // setting the Entered Data from The User In The Node;
    n->data = item;

    // Setting the left & right pointers to the NULL, as they're not pointing to AnyWhere!
    n->l = NULL;
    n->r = NULL;

    // now, it's time to return the node's [Address/Reference] to access from the Any Function;)
    return(n);   
}

void traversal(node *root){

    if(root != NULL){
        cout<<root->data<<endl;
        traversal(root->l);
        traversal(root->r);
    }
}

int main(void){
    node *n1, *n2, *n3, *n4, *n5, *n6;


    n1 = createBTreeNode(8);
    n2 = createBTreeNode(1);
    n3 = createBTreeNode(2);
    n4 = createBTreeNode(65);
    n5 = createBTreeNode(54);
    n6 = createBTreeNode(44);

    // linking the nodes...
    n1->l = n2;
    n1->r = n3;

    n2->l = n4;
    n3->l = n5;

    traversal(n1);
}