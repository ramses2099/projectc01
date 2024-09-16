#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>

typedef struct Node{
    int data;
    struct Node *next;
} Node;

Node *linkedlist = NULL;

void insert_end(int);
void insert_beg(int);
void ldelete(int);
void display();

int main() {
    system("cls");
    int val, n;
        
    do
    {
        printf("\n*************************MENU***************************\n ");
        printf("\n1. Insert at the end");
        printf("\n2. Insert at the beginning");
        printf("\n3. Delete a node");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &n);


        switch (n)
        {
        case 1:
            printf("\nEnter the value to insert: ");
            scanf("%d", &val);
            insert_end(val);
            break;
        
        case 2:
            printf("\nEnter the value to insert: ");
            scanf("%d", &val);
            insert_beg(val);
            break;
            
        case 3:
            printf("\nEnter the value to delete: ");
            scanf("%d", &val);
            ldelete(val);

        case 4:
            printf("\nDisplay all elements of linked list: ");            
            display();

        default:
            break;
        }



    } while (n != 5);
    



    return 0;
 
}


void insert_end(int val)
{
    Node *temp = linkedlist;
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;
    if(linkedlist == NULL){
        linkedlist = newNode;
    }else{
        while(temp->next!= NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }

}
void insert_beg(int val)
{
    Node *temp = linkedlist;
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = linkedlist;
    linkedlist = newNode;
}
void ldelete(int val)
{

}
void display(){

}