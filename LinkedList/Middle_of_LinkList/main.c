#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
    node* head = InitLinkList(12345);
    node* middle = middleNode(head);
    
    printf("\nMiddle Node: %d\n", middle -> data);

    free_LinkList(head);
    return 0;
}