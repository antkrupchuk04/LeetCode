#include "header.h"

int main()
{
    node* head = InitLinkList(1010);

    printLinkList(head);
    printf("Decimal number: %d\n", getDecimalValue(head));

    free_LinkList(head);
    return 0;
}