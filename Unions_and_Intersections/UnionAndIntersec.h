#ifndef UnionAndIntersec_Header
#define UnionAndIntersec_Header
#define MAX_SIZE 100


void addElement(int set[], int *size, int element);
void deleteElement(int set[], int *size, int element);
void findUnion(int set1[], int size1, int set2[], int size2, int unionSet[], int *unionSize);
void findIntersection(int set1[], int size1, int set2[], int size2, int intersectionSet[], int *intersectionSize);
void displaySet(int set[], int size, const char *setName);



#endif
