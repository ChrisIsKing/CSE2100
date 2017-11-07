//
//  Tree.h
//  Lab 4 (Trees)
//
//  Created by Christopher Clarke on 10/31/17.
//  Copyright © 2017 Christopher Clarke. All rights reserved.
//

#ifndef Tree_h
#define Tree_h

#include <stdio.h>
#include <stdbool.h>

typedef struct node
{
    int n;
    struct node* left;
    struct node* right;
}
node;

// function protoypes
bool search(node* root, int val);
bool insert(node* root, int val);
node* insert_node(int val);

#endif /* Tree_h */
