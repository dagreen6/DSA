#include "UnionAndIntersec.h"
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int set1[MAX_SIZE], set2[MAX_SIZE];
    int size1 = 0, size2 = 0;
    int unionSet[MAX_SIZE], intersectionSet[MAX_SIZE];
    int unionSize = 0, intersectionSize = 0;

    addElement(set1, &size1, 1);
    addElement(set1, &size1, 2);
    addElement(set1, &size1, 3);

    addElement(set2, &size2, 2);
    addElement(set2, &size2, 3);
    addElement(set2, &size2, 4);
	deleteElement(set2, &size2 , 4);
	
    displaySet(set1, size1, "Set 1");
    displaySet(set2, size2, "Set 2");

    findUnion(set1, size1, set2, size2, unionSet, &unionSize);
    displaySet(unionSet, unionSize, "Union");

    findIntersection(set1, size1, set2, size2, intersectionSet, &intersectionSize);
    displaySet(intersectionSet, intersectionSize, "Intersection");
	
	return 0;
}
