#include "graph.h"
#include <stdio.h>
#include <stdlib.h>

struct AdjListNode* createNode(char vertex) {
    struct AdjListNode* newNode = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
    newNode->vertex = vertex;
    newNode->next = NULL;
    return newNode;
}

struct Graph* createGraph(int numVertices) {
	int i;
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = numVertices;

    graph->array = (struct AdjList*)malloc(numVertices * sizeof(struct AdjList));

    for (i = 0; i < numVertices; i++) {
        graph->array[i].head = NULL;
    }

    return graph;
}

void addEdge(struct Graph* graph, char src, char dest) {
    struct AdjListNode* newNode = createNode(dest);
    newNode->next = graph->array[src - 'A'].head;
    graph->array[src - 'A'].head = newNode;

    newNode = createNode(src);
    newNode->next = graph->array[dest - 'A'].head;
    graph->array[dest - 'A'].head = newNode;
}

void printGraph(struct Graph* graph) {
	int i;
    for (i = 0; i < graph->numVertices; i++) {
        struct AdjListNode* trav = graph->array[i].head;
        printf("Vertex %c:", 'A' + i);
        while (trav) {
            printf(" -> %c", trav->vertex);
            trav = trav->next;
        }
        printf("\n");
    }
}

void printAdjacencyMatrix(struct Graph* graph) {
	int i, j;
    int numVertices = graph->numVertices;
    int matrix[numVertices][numVertices];
	
    for (i = 0; i < numVertices; i++) {
        for (j = 0; j < numVertices; j++) {
            matrix[i][j] = 0;
        }
    }

    for (i = 0; i < numVertices; i++) {
        struct AdjListNode* trav = graph->array[i].head;
        while (trav) {
            matrix[i][trav->vertex - 'A'] = 1;
            trav = trav->next;
        }
    }

    printf("Adjacency Matrix:\n");
    printf("   ");
    
    for (i = 0; i < numVertices; i++) {
        printf(" %c ", 'A' + i);
    }
    printf("\n");

    for (i = 0; i < numVertices; i++) {
        printf("%c ", 'A' + i);
        for (j = 0; j < numVertices; j++) {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void printAdjacencyList(struct Graph* graph) {
	int i;
     printf("Adjancey List: \n");
    for (i = 0; i < graph->numVertices; i++) {
        struct AdjListNode* trav = graph->array[i].head;
        printf("%c:", 'A' + i);
        while (trav) {
            printf(" -> %c", trav->vertex);
            trav = trav->next;
        }
        printf("\n");
    }
}





