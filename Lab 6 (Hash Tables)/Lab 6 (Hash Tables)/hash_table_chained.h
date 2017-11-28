//
//  hash_table_chained.h
//  Lab 6 (Hash Tables)
//
//  Created by Christopher Clarke on 11/28/17.
//  Copyright © 2017 Christopher Clarke. All rights reserved.
//

#ifndef hash_table_chained_h
#define hash_table_chained_h

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
    char fname[20];
    char lname[20];
    struct node* next;
}node;

/*
 * load() - Loads item into hash table
 */
bool load(node* hash_table[], char* fname, char* lname);

/*
 * lookup() - searches for item by fname in hash table
 */
node* lookup(node* hash_table[], char* name, char* fname, char* lname);

/*
 * delete_node() - deletes item in hash table
 */
bool delete_node(node* hash_table[], char* fname, char* lname);


#endif /* hash_table_chained_h */
