#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	  struct Graph* graph = createGraph(5);

    addEdge(graph, 'A', 'B');
    addEdge(graph, 'A', 'C');
    addEdge(graph, 'A', 'D');
    addEdge(graph, 'A', 'E');
    addEdge(graph, 'B', 'C');
    addEdge(graph, 'B', 'D');
    addEdge(graph, 'B', 'E');
    addEdge(graph, 'C', 'D');
    addEdge(graph, 'C', 'E');
    addEdge(graph, 'D', 'E');

    printAdjacencyMatrix(graph);
    printf("\n");
    printAdjacencyList(graph);

  
    for (i = 0; i < graph->numVertices; i++) {
        struct AdjListNode* trav = graph->array[i].head;
        while (trav) {
            struct AdjListNode* temp = trav;
            trav = trav->next;
            free(temp);
        }
    }
    free(graph->array);
    free(graph);
	
	return 0;
}
