//
//  Tree.c
//  Lab 4 (Trees)
//
//  Created by Christopher Clarke on 10/31/17.
//  Copyright © 2017 Christopher Clarke. All rights reserved.
//

#include "Tree.h"
#include <stdlib.h>

bool search(node* root, int val) {
    // check if you are at the correct value
    if (root->n == val) {
        return true;
    }
    
    // check if no value is present
    if (root == NULL) {
        return false;
    }
    // go left
    if (val < root->n) {
        search(root->left, val);
    } else {
        search(root->right, val);
    }
    return true;
}

bool insert(node* root, int val) {
    // first insertion
    if (root == NULL) {
        root = insert_node(val);
        return true;
    }
    if (val < root->n)
    {
        // check if anything is to the left
        if (root->left == NULL) {
            root->left = insert_node(val);
            return true;
        } else {
            insert(root->left, val);
        }
    }
    else {
        // check if anything is to the right
        if (root->right == NULL) {
            root->right = insert_node(val);
            return true;
        } else {
            insert(root->right, val);
        }
    }
    return true;
}

node* insert_node(int val) {
    node* new_node = malloc(sizeof(node));
    if (new_node == NULL) {
        return NULL;
    }
    new_node->n = val;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
