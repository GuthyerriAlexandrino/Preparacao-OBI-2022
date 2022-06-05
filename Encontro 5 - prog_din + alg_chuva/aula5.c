#include <stdio.h>

int main() {
  int n = 0, m = 0;
  scanf("%d", &n);
  scanf("%d", &m);
  int **matriz = malloc(n * (sizeof(int*)) ); 

  for(int i = 0; i < n; i++) {
    matriz[i] = malloc(m * sizeof(int));
  }
}

// n = 4; m = 2;
// 0: [0, 1]
// 1: [0, 1]
// 2: [0, 1]
// 3: [0, 1]