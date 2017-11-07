//
//  main.c
//  Lab 4 (Trees)
//
//  Created by Christopher Clarke on 10/31/17.
//  Copyright © 2017 Christopher Clarke. All rights reserved.
//


#include <stdio.h>
#include "Tree.h"


// Global Variable too root of Tree
node* root;

int main(void)
{
    // create root node
    root = malloc(sizeof(node));
    if (root == NULL)
    {
        printf("Out of memory!\n");
        return 1;
    }
    root->n = 7;
    root->left = NULL;
    root->right = NULL;
    
    // create more nodes
    node* three = malloc(sizeof(node));
    if (three == NULL)
    {
        printf("Out of memory!\n");
        return 1;
    }
    three->n = 3;
    three->left = NULL;
    three->right = NULL;
    
    node* six = malloc(sizeof(node));
    if (six == NULL)
    {
        printf("Out of memory!\n");
        return 1;
    }
    six->n = 6;
    six->left = NULL;
    six->right = NULL;
    
    node* nine = malloc(sizeof(node));
    if (nine == NULL)
    {
        printf("Out of memory!\n");
        return 1;
    }
    nine->n = 9;
    nine->left = NULL;
    nine->right = NULL;
    
    // link together nodes
    root->left = three;
    root->right = nine;
    three->right = six;
    
    // testing insert
    for(int i = 0; i < 10; i++)
    {
        printf("Inserting %i ...%s!\n", i, insert(root, i)? "success" : "fail");
    }
    for(int i = 0; i < 10; i++)
    {
        printf("Tree contains %i? %s\n", i, search(root, i)? "true" : "false");
    }
    
    return 0;
}
