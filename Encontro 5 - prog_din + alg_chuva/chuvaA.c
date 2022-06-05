#include <stdio.h>

void cria_matriz(char **matriz, int n, int m);
void preenche_matriz(char **matriz, int n, int m);

int main() {
  int n = 0, m = 0;

  scanf("%d %d", &n, &m);

  char **matriz;
  cria_matriz(matriz, n, m);
  preenche_matriz(matriz, n, m);

  short atualizou = 1;
  while (atualizou) {
    atualizou = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (matriz[i][j] == '.') {
          short r1 = i > 0;
          short r2 = j > 0;
          short r3 = i < n;
          short r4 = j < m;
          if (r1 && matriz[i - 1][j] == 'o') {
            matriz[i][j] = 'o';
            atualizou = 1;
          } else if (r2 && r3 && matriz[i][j - 1] == 'o' && matriz[i + 1][j - 1] == '#') {
            matriz[i][j] = 'o';
            atualizou = 1;
          } else if (r4 && r3 && matriz[i][j + 1] == 'o' && matriz[i + 1][j + 1] == '#') {
            matriz[i][j] = 'o';
            atualizou = 1;
          }
        }
      }
    }
  }
}

/* 
c(i-1,j)= "o"; ou
c(i,j-1)= "o" e c(i+1,j-1)= "#"; ou
c(i,j+1)= "o" e c(i+1,j+1)= "#".
*/

void cria_matriz(char **matriz, int n, int m) {
  malloc(n * sizeof(char*));

  for (int i = 0; i < m; i++) {
    matriz[i] = malloc(m * sizeof(char));
  }
}

void preenche_matriz(char **matriz, int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf(" %c", &matriz[i][j]);
    }
  }
}