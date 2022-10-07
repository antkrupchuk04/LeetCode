#include "header.h"

struct node
{
    int data;
    struct node* next;
};

int getDecimalValue(struct node* head)
{
    node* copy = head;
    int length = 0;
    int decimal = 0;

    while(copy -> next)
    {
        length++;
        copy = copy -> next;
    }

    for(length; length >= 0; length--)
    {
        decimal+= head -> data * pow(2,length);
        head = head -> next;
    }

    return decimal;
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

