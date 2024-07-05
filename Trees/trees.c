#include "trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

NodePtr createNode(Product item) {
    NodePtr newNode = (NodePtr)malloc(sizeof(NodeType));
    if (newNode != NULL) {
        newNode->item = item;
        newNode->left = NULL;
        newNode->right = NULL;
    }
    return newNode;
}

NodePtr insertNode(NodePtr root, Product item) {
    if (root == NULL) {
        return createNode(item);
    }
    
    if (strcmp(item.prodName, root->item.prodName) < 0) {
        root->left = insertNode(root->left, item);
    } else if (strcmp(item.prodName, root->item.prodName) > 0) {
        root->right = insertNode(root->right, item);
    }
 
    return root;
}


NodePtr findMin(NodePtr node) {
    NodePtr current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}


NodePtr deleteNode(NodePtr root, char *prodName) {
    if (root == NULL) {
        return root;
    }

    if (strcmp(prodName, root->item.prodName) < 0) {
        root->left = deleteNode(root->left, prodName);
    } else if (strcmp(prodName, root->item.prodName) > 0) {
        root->right = deleteNode(root->right, prodName);
    } else { 

        if (root->left == NULL) {
            NodePtr temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            NodePtr temp = root->left;
            free(root);
            return temp;
        }

        NodePtr temp = findMin(root->right);
        root->item = temp->item;
        root->right = deleteNode(root->right, temp->item.prodName);
    }
    return root;
}

void inorderTraversal(NodePtr root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%s\n", root->item.prodName);
        inorderTraversal(root->right);
    }
}

void preorderTraversal(NodePtr root) {
    if (root != NULL) {
        printf("%s\n", root->item.prodName);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(NodePtr root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%s\n", root->item.prodName);
    }
}

void bfsTraversal(NodePtr root) {
    if (root == NULL) {
        return;
    }

}




