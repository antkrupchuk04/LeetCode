#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node;
typedef struct node node;

node* InitLinkList(int num); // Converts number to linked list. Example: 12345: 1 -> 2 -> 3 -> 4 -> 5

void printLinkList(node* head);

int free_LinkList(node* head);

int getDecimalValue(struct node* head);
