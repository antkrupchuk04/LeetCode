#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 1000

typedef struct HashSet HashSet;

HashSet* CreateSet();

int Hash(int key);

void AddtoHash(int key, HashSet* obj);

int SetContains(int key, HashSet* obj);

void DeletefromHash(int key, HashSet* obj);

void FreeHash(HashSet* obj);


