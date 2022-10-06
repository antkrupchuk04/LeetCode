#include "header.h"

node* CreateNode(int data)
{
    node* newNode = (node*)malloc(sizeof(node));
    newNode -> data = data;

    return newNode;
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

node* middleNode(node* head)
{
    int length = 0;
    node* copy = head;

    while(head) // Getting length of Linked List
    {
        length++;
        head = head -> next;
    }

    if((length % 2) == 0)
    {
        length = (length / 2);
        for(int i = 0; i < length; i++)
        {
            copy = copy -> next;
        }
        return copy;
    }

    length = (length / 2) + 0.5;
    for(int i = 0; i < length; i++)
    {
        copy = copy -> next;
    }
    
    return copy;
}
