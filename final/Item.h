#ifndef _ITEM_
#define _ITEM_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* Key;

typedef struct hashtags{
int rep;
char* hashtag;
}* Item;

#define NULLitem NULL
#define key(a) (a == NULL ? "" : a->hashtag)
#define keyNull(a) (a == NULL ? "" : "")

#define less(a,b) (strcmp(a,b)<0)
#define greater(a,b) (strcmp(a,b)>0)
#define eq(a,b) (strcmp(a,b)==0)
#define exch(A, B) { Item t = A; A = B; B = t; }
#define compexch(A, B) if (less(B, A)) exch(A, B)	

Item newItem(char *hashtag,int rep);
void deleteItem(Item a);
void visitItem(Item a);


#endif

