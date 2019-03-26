
#include <stdio.h>
#include <pthread.h>
#include "hash.h"

// remove printf debug statements at the end

HashTable *hash_init (int N, int K)
{
	printf ("hash_init called\n"); 
	return (NULL); 
}

int hash_insert (HashTable *hp, int k, void *v)
{
	printf ("hash_insert called\n"); 
	return (0); 
}

int hash_delete (HashTable *hp, int k) {

	printf ("hash_delete called\n"); 
	return (0); 
}

int hash_update (HashTable *hp, int k, void *v)
{
        printf ("hash_update called\n"); 
	return (0);
}

int hash_get (HashTable *hp, int k, void **vp)
{
	printf ("hash_get called\n");  
	return (0); 
}

int hash_destroy (HashTable *hp)
{
	printf ("hash_destroy called\n"); 
	return (0); 
}
