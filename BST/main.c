#include <stdio.h>
#include "BST.h"

int main() {
    NodePtr node = NULL;

    Product productI = {"Serendipity", 2.5, 10, {12, 1, 2021}};
    Product productII = {"Angst", 1.5, 12, {1, 12, 2020}};
    Product productIII = {"Euphoria", 1.1, 5, {12, 1, 2022}};
    Product productIV = {"Lorem Epsum", 3.5, 11, {2, 2, 2024}};
    Product productV = {"Pluviophile", 2.8, 8, {15, 5, 2023}};
    Product productVI = {"Pedophile", 2.2, 7, {10, 8, 2022}};
    Product productVII = {"Lasalle", 1.7, 6, {20, 3, 2023}};
    Product productVIII = {"Maltesers", 4.0, 9, {5, 10, 2021}};

    addBST(&node, productI);
    addBST(&node, productII);
    addBST(&node, productIII);
    addBST(&node, productIV);
    addBST(&node, productV);
    addBST(&node, productVI);
    addBST(&node, productVII);
    addBST(&node, productVIII);
    
    printf("Binary Search Tree\n");
    displayBST(node,0);
    
    char productToDelete[] = "Lasalle";
    node = deleteBST(node, productToDelete);
    
    printf("After deletion:\n\n");
    displayBST(node, 0);

    traversalBST(node);

    return 0;
}
