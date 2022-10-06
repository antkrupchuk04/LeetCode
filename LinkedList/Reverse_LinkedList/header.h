#include <stdio.h>
#include <stdlib.h>

struct node;

typedef struct node node;

node* CreateNode(int data);

node* InitLinkList(int num); // Converts number to linked list. Example: 12345: 1 -> 2 -> 3 -> 4 -> 5

void printLinkList(node* head);

int free_LinkList(node* head);

node* ReverseLinkList(node* head);