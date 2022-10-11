#include "header.h"

struct HashSet
{
    int** arr;
};

int Hash(int key)
{
    return (key * 2654435761) % (TABLE_SIZE - 1);
}

HashSet* CreateSet()
{
    HashSet* newSet = (HashSet*)malloc(sizeof(HashSet));
    newSet -> arr = (int**)malloc(TABLE_SIZE * sizeof(int*));

    for(int i = 0; i < TABLE_SIZE; i++)
    {
        newSet -> arr[i] = NULL;
    }

    return newSet;
}

void FreeHash(HashSet* obj)
{
    if(obj == NULL)
    {
        printf("Hash Set is empty !\n");
        return;
    }

    for(int i = 0; i < TABLE_SIZE; i++)
    {
        if(obj -> arr[i] != NULL)
        {
            free(obj -> arr[i]);
        }
    }

    free(obj -> arr);
    free(obj);
    return;
}

void AddtoHash(int key, HashSet* obj)
{
    int hash = Hash(key);

    if(obj -> arr[hash] == NULL)
    {
        obj -> arr[hash] = (int*)malloc(sizeof(int));
        obj -> arr[hash][0] = key;

        return;
    }
    
    printf("This key is engaged !\n");
    return;
}

void DeletefromHash(int key, HashSet* obj)
{
    int hash = Hash(key);

    if(obj -> arr[hash] == NULL)
    {
        printf("Hash node is empty !\n");
        return;
    }

    free(obj -> arr[hash]);
    printf("Hash node was removed successfuly !\n");

    return;
}

int SetContains(int key, HashSet* obj)
{
    if(obj -> arr[Hash(key)] != NULL)
    {
        printf("Hash Set contains that item !\n");
        return 1;
    }

    printf("Hash Set DOESN'T contains that item !\n");
    return 0;
}

