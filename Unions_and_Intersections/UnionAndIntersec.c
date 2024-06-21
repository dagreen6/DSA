#include "UnionAndIntersec.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void addElement(int set[], int *size, int element) {
	int i;
    for (i = 0; i < *size; ++i) {
        if (set[i] == element) {
            return; 
        }
    }
    set[*size] = element;
    (*size)++;
}

void deleteElement(int set[], int *size, int element) {
	int i, j;
    for (i = 0; i < *size; ++i) {
        if (set[i] == element) {
            for (j = i; j < *size - 1; ++j) {
                set[j] = set[j + 1];
            }
            (*size)--;
            return;
        }
    }
}

void findUnion(int set1[], int size1, int set2[], int size2, int unionSet[], int *unionSize) {
	int i;
    for (i = 0; i < size1; ++i) {
        addElement(unionSet, unionSize, set1[i]);
    }
    for (i = 0; i < size2; ++i) {
        addElement(unionSet, unionSize, set2[i]);
    }
}

void findIntersection(int set1[], int size1, int set2[], int size2, int intersectionSet[], int *intersectionSize) {
    int i, j;
    for (i = 0; i < size1; ++i) {
        for (j = 0; j < size2; ++j) {
            if (set1[i] == set2[j]) {
                addElement(intersectionSet, intersectionSize, set1[i]);
                break;
            }
        }
    }
}

void displaySet(int set[], int size, const char *setName) {
	int i;
    printf("%s: { ", setName);
    for (i = 0; i < size; ++i) {
        printf("%d ", set[i]);
    }
    printf("}\n");
}

