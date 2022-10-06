#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
    node* head = InitLinkList(12345);

    printLinkList(head);
    printf("\nReversed ");
    head = ReverseLinkList(head);
    printLinkList(head);

    free_LinkList(head);

    return 0;
}