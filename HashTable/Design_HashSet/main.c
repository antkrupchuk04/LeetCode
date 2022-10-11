#include "header.h"

int main()
{
    HashSet* HashSet = CreateSet();
    AddtoHash(2, HashSet);
    AddtoHash(3, HashSet);

    SetContains(3, HashSet);
    SetContains(1, HashSet);
    DeletefromHash(3, HashSet);

    FreeHash(HashSet);
    return 0;
}    