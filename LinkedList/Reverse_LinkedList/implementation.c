#include "header.h"

struct node
{
    int data;
    node* next;
};

node* ReverseLinkList(node* head)
{
    node* prevNode = NULL;
    node* nextNode = NULL;
    node* currentNode = head;

    while(currentNode)
    {
        nextNode = currentNode -> next;
        currentNode -> next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }

    return prevNode;
}

node* InitLinkList(int num)
{
    node* prevNode = NULL;

    while(num)
    {
        node* newNode = (node*)malloc(sizeof(node));
        newNode -> data = num % 10;
        num /= 10;
        newNode -> next = prevNode;
        prevNode = newNode;
    }

    return prevNode;
}

void printLinkList(node* head)
{
    printf("Linked List:");
    while(head)
    {
        printf(" %d ->", head -> data);
        head = head -> next;
    }
    printf(" NULL\n");
    return;
}

int free_LinkList(node* head)
{
    if(head == NULL)
    {
        printf("Linked List is empty !\n");
        return -1;
    }

    node* temp;
    while(head)
    {
        temp = head;
        head = head -> next;
        free(temp);
    }

    return 0;
}

