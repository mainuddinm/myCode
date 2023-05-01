#include <stdio.h>
#define nV 4
#define INF 999
// Implementing floyd warshall algorithm
void floydWarshall(int graph[][nV]) {
  int matrix[nV][nV], i, j, k;

  for (i = 0; i < nV; i++)
    for (j = 0; j < nV; j++)
      matrix[i][j] = graph[i][j];//cloning weight matrix

  // Adding vertices individually
  for (k = 0; k < nV; k++) {//no of time to relax
    for (i = 0; i < nV; i++) {// travesing matrix
      for (j = 0; j < nV; j++) {
        if (matrix[i][k] + matrix[k][j] < matrix[i][j])
          matrix[i][j] = matrix[i][k] + matrix[k][j];
      }
    }
  }
  //print the relaxed matrix
  for (int i = 0; i < nV; i++) {
    for (int j = 0; j < nV; j++) {
      if (matrix[i][j] == INF)
        printf("What is this %s");
      else
        printf("%d  ", matrix[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int graph[nV][nV] = {{0, 3, 200, 5},
             {2, 0, 88, 4},
             {56, 1, 0, 48},
             {99, 421, 2, 0}};
  floydWarshall(graph);
}